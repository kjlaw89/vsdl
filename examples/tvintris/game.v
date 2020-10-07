module main

import math
import rand.wyrand
import sync
import vsdl
import vsdl.events
import vsdl.gfx
import vsdl.ttf

struct Game {
	events       chan string
	fonts        map[string]ttf.Font
	input        chan events.Event
	renderer     gfx.Renderer
mut:
	k_fire       int
	k_up         int
	k_down       int
	k_left       int
	k_right      int
	lines        int                     // Count consecutive lines for scoring
	name         string
	pos_x        int                     // X Position of the current tetro
	pos_y        int                     // Y Position of the current tetro
	rng          &wyrand.WyRandRNG
	score        int                     // Score of the current game
	state        GameState       = .init // State of the current game
	update_rate  u32             = 250
	wg           &sync.WaitGroup = sync.new_waitgroup()
	
	// field[y][x] contains the color of the block with (x,y) coordinates
	// "-1" border is to avoid bounds checking.
	// -1 -1 -1 -1
	// -1  0  0 -1
	// -1  0  0 -1
	// -1 -1 -1 -1
	field        [][]int
	rotation_idx int                     // Index of the rotation (0-3)
	tetro        []Block                 // TODO: tetro Tetro
	tetro_idx    int                     // Index of the current tetro. Refers to its color.
	tetro_next   int                     // Index of the next tetro. Refers to its color.
	tetro_stats  []int                   // tetro stats : buckets of drawn tetros
	tetro_total  int                     // total number of drawn tetros
	tetros_cache []Block                 // TODO: tetros_cache []Tetro
}

// init initializes this game state
pub fn (mut game Game) init() {

	// Don't allow initializing the game more than once
	if game.state != .init {
		return
	}

	game.state = .gamestart

	// Start the update loop in a new thread
	// This will manage the input
	go game.update()
	go game.input()

	game.wg.add(2)
}

fn (mut game Game) delete_completed_line(y int) int {
	for x := 1; x <= field_width; x++ {
		f := game.field[y]
		if f[x] == 0 {
			return 0
		}
	}

	// Move everything down by 1 position
	for yy := y - 1; yy >= 1; yy-- {
		for x := 1; x <= field_width; x++ {
			mut a := game.field[yy + 1]
			b := game.field[yy]
			a[x] = b[x]
		}
	}

	return 1
}

fn (mut game Game) delete_completed_lines() int {
	mut n := 0
	for y := field_height; y >= 1; y-- {
		n += game.delete_completed_line(y)
	}

	return n
}

// draw draws this game to the renderer
pub fn (mut game Game) draw() {

	// Draw tetro
	for i in 0..tetro_size {
		if game.tetro.len <= i {
			continue
		}

		tetro := game.tetro[i]
		game.draw_block(game.pos_x + tetro.x, game.pos_y + tetro.y, game.tetro_idx + 1)
	}

	// Draw field
	for i := 1; i < field_height + 1; i++ {
		for j := 1; j < field_width + 1; j++ {
			if game.field.len <= i {
				continue
			}

			f := game.field[i]
			if f[j] > 0 {
				game.draw_block(j, i, f[j])
			}
		}
	}
}

// draw_block is a simple helper function to draw a single block based on the provided details
fn (game Game) draw_block(x, y, color_index int) {
	rect := gfx.Rect{
		x: (x - 1) * block_size
		y: (y - 1) * block_size
		w: block_size - 1
		h: block_size - 1
	}

	color := tetro_colors[color_index]

	game.renderer.set_draw_color(color)
	game.renderer.draw_fill_rect(rect)
	game.renderer.set_draw_color(bg_color)
}

fn (mut game Game) drop_tetro() {
	for i in 0..tetro_size {
		tetro := game.tetro[i]
		x := tetro.x + game.pos_x
		y := tetro.y + game.pos_y
		// Remember the color of each block
		// TODO: game.field[y][x] = game.tetro_idx + 1
		mut row := game.field[y]
		row[x] = game.tetro_idx + 1
	}
}

// Place a new tetro on top
fn (mut game Game) generate_tetro() {
	game.pos_y = 0
	game.pos_x = field_width / 2 - tetro_size / 2
	game.tetro_idx = game.rand_tetro()
	game.tetro_stats[game.tetro_idx]++
	game.tetro_total++
	game.rotation_idx = 0
	game.get_tetro()
}

// Get the right tetro from cache
fn (mut game Game) get_tetro() {
	idx := game.tetro_idx * tetro_size * tetro_size + game.rotation_idx * tetro_size
	game.tetro = game.tetros_cache[idx .. idx + tetro_size]
}

// input manages this game's input data as it comes in
// This is run in a separate thread
fn (mut game Game) input() {
	for game.state != .shutdown {
		select {
			event := <-game.input {
				match event.@type {
					.keydown {
						match event.key.input.key {
							game.k_up    { game.rotate_tetro() }
							game.k_left  { game.move_right(-1) }
							game.k_right { game.move_right(1)  }
							game.k_down  { game.move_tetro()   } // drop faster when the player presses <down>
							else {}
						}
					}
					else {}
				}
			}
		}
	}

	game.wg.done()
}

// move_right
fn (mut game Game) move_right(dx int) bool {
	// Reached left/right edge or another tetro?
	for i in 0..tetro_size {
		tetro := game.tetro[i]
		y := tetro.y + game.pos_y
		x := tetro.x + game.pos_x + dx
		row := game.field[y]
		if row[x] != 0 {
			// Do not move
			return false
		}
	}
	game.pos_x += dx
	return true
}

// move_tetro
fn (mut game Game) move_tetro() {
	// Check each block in current tetro
	for block in game.tetro {
		y := block.y + game.pos_y + 1
		x := block.x + game.pos_x
		// Reached the bottom of the screen or another block?
		// TODO: if game.field[y][x] != 0
		//if game.field[y][x] != 0 {
		row := game.field[y]
		if row[x] != 0 {
			// The new tetro has no space to drop => end of the game
			if game.pos_y < 2 {
				game.state = .gameover
				game.tetro_total = 0
				return
			}

			// Drop it and generate a new one
			game.drop_tetro()
			game.generate_tetro()
			game.events <- "play_block"
			return
		}
	}

	game.pos_y++
}

fn parse_binary_tetro(t_ int) []Block {
	mut res := []Block{ len: 4 }
	mut t := t_
	mut cnt := 0

	horizontal := t == 9 // special case for the horizontal line
	for i := 0; i <= 3; i++ {
		// Get ith digit of t
		p := int(math.pow(10, 3 - i))
		mut digit := t / p
		t %= p

		// Convert the digit to binary
		for j := 3; j >= 0; j-- {
			bin := digit % 2
			digit /= 2

			if bin == 1 || (horizontal && i == tetro_size - 1) {
				res[cnt].x = j
				res[cnt].y = i
				cnt++
			}
		}
	}

	return res
}

fn (mut game Game) parse_tetros() {
	for b_tetros in tetros {
		for b_tetro in b_tetros {
			for t in parse_binary_tetro(b_tetro) {
				game.tetros_cache << t
			}
		}
	}
}

// rotate_tetro
fn (mut game Game) rotate_tetro() {
	old_rotation_idx := game.rotation_idx
	game.rotation_idx++
	if game.rotation_idx == tetro_size {
		game.rotation_idx = 0
	}

	game.get_tetro()
	if !game.move_right(0) {
		game.rotation_idx = old_rotation_idx
		game.get_tetro()
	}

	if game.pos_x < 0 {
		game.pos_x = 1
	}
}

// rand_tetro generates a new tetro to use
fn (mut game Game) rand_tetro() int {
	cur := game.tetro_next
	game.tetro_next = int(game.rng.u32() % u32(tetros.len))
	return cur
}

// start resets all game variables and sets the game state to active
pub fn (mut game Game) start() {
	game.score = 0
	game.tetro_total = 0
	game.tetro_stats = [0, 0, 0, 0, 0, 0, 0]
	game.parse_tetros()
	game.generate_tetro()
	game.field = []

	// Generate the field, fill it with 0's, add -1's on each edge
	for _ in 0..field_height + 2 {
		mut row := []int{ init: 0, len: field_width + 2, }
		row[0] = -1
		row[field_width + 1] = -1
		game.field << row
	}

	mut first_row := game.field[0]
	mut last_row := game.field[field_height + 1]
	for j in 0..field_width + 2 {
		first_row[j] = -1
		last_row[j] = -1
	}
	
	game.state = .running
}

// update manages this game's state
// This is run in a separate thread
fn (mut game Game) update() {
	for game.state != .shutdown {
		if game.state == .running {
			game.move_tetro()
			n := game.delete_completed_lines()
			if n > 0 {
				game.lines += n
			} else {
				if game.lines > 0 {
					if game.lines > 1 {
						game.events <- "play_double"
					} else if game.lines == 1 {
						game.events <- "play_single"
					}

					game.score += 10 * game.lines * game.lines
					game.lines = 0
				}
			}
		}

		vsdl.delay(game.update_rate)
	}

	game.wg.done()
}

pub fn (mut game Game) shutdown() {
	game.state = .shutdown
	game.wg.wait()
}