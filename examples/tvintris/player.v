module main

import math
import rand
import rand.wyrand
import sync
import vsdl
import vsdl.events
import vsdl.gfx

const (
	// Controls
	p1_fire  = events.KeyCode.key_q
	p1_up    = events.KeyCode.key_w
	p1_down  = events.KeyCode.key_s
	p1_left  = events.KeyCode.key_a
	p1_right = events.KeyCode.key_d

	p2_fire  = events.KeyCode.key_l
	p2_up    = events.KeyCode.key_up
	p2_down  = events.KeyCode.key_down
	p2_left  = events.KeyCode.key_left
	p2_right = events.KeyCode.key_right

	// Tetros' 4 possible states are encoded in binaries
	tetros = [
		// 0000 0
		// 0000 0
		// 0110 6
		// 0110 6
		[66, 66, 66, 66],
		// 0000 0
		// 0000 0
		// 0010 2
		// 0111 7
		[27, 131, 72, 232],
		// 0000 0
		// 0000 0
		// 0011 3
		// 0110 6
		[36, 231, 36, 231],
		// 0000 0
		// 0000 0
		// 0110 6
		// 0011 3
		[63, 132, 63, 132],
		// 0000 0
		// 0011 3
		// 0001 1
		// 0001 1
		[311, 17, 223, 74],
		// 0000 0
		// 0011 3
		// 0010 2
		// 0010 2
		[322, 71, 113, 47],
		// Special case since 15 can't be used
		// 1111
		[1111, 9, 1111, 9],
	]

	// Each tetro has its unique color
	tetro_colors = [
		gfx.Color{ r: 0,    g: 0,    b: 0    },	// unused ?
		gfx.Color{ r: 0,    g: 0x62, b: 0xC0 },	// quad : darkblue 0062c0
		gfx.Color{ r: 0xCA, g: 0x7D, b: 0x5F },	// tricorn : lightbrown ca7d5f
		gfx.Color{ r: 0,    g: 0xC1, b: 0xBF },	// short topright : lightblue 00c1bf
		gfx.Color{ r: 0,    g: 0xC1, b: 0    },	// short topleft : lightgreen 00c100
		gfx.Color{ r: 0xBF, g: 0xBE, b: 0    },	// long topleft : yellowish bfbe00
		gfx.Color{ r: 0xD1, g: 0,    b: 0xBF },	// long topright : pink d100bf
		gfx.Color{ r: 0xD1, g: 0,    b: 0    },	// longest : lightr d10000
		gfx.Color{ r: 0,    g: 170,  b: 170, },	// unused ?
	]
)

struct Player {
	events       chan string
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
	ready        bool
	rng          &wyrand.WyRandRNG = 0
	score        int                     // Score of the current game
	state        GameState         = .init // State of the current game
	update_rate  u32               = 250
	wg           &sync.WaitGroup   = sync.new_waitgroup()
	
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
pub fn (mut player Player) init() {

	// Don't allow initializing the game more than once
	if player.state != .init {
		return
	}

	// Start the update loop in a new thread
	// This will manage the input
	go player.update()
	go player.input()

	player.wg.add(2)
}

fn (mut player Player) delete_completed_line(y int) int {
	for x := 1; x <= field_width; x++ {
		f := player.field[y]
		if f[x] == 0 {
			return 0
		}
	}

	// Move everything down by 1 position
	for yy := y - 1; yy >= 1; yy-- {
		for x := 1; x <= field_width; x++ {
			mut a := player.field[yy + 1]
			b := player.field[yy]
			a[x] = b[x]
		}
	}

	return 1
}

fn (mut player Player) delete_completed_lines() int {
	mut n := 0
	for y := field_height; y >= 1; y-- {
		n += player.delete_completed_line(y)
	}

	return n
}

// draw draws this game to the renderer
pub fn (mut player Player) draw() {

	// Draw tetro
	for i in 0..tetro_size {
		if player.tetro.len <= i {
			continue
		}

		tetro := player.tetro[i]
		player.draw_block(player.pos_x + tetro.x, player.pos_y + tetro.y, player.tetro_idx + 1)
	}

	// Draw field
	for i := 1; i < field_height + 1; i++ {
		for j := 1; j < field_width + 1; j++ {
			if player.field.len <= i {
				continue
			}

			f := player.field[i]
			if f[j] > 0 {
				player.draw_block(j, i, f[j])
			}
		}
	}
}

// draw_block is a simple helper function to draw a single block based on the provided details
fn (player Player) draw_block(x, y, color_index int) {
	rect := gfx.Rect{
		x: (x - 1) * block_size
		y: (y - 1) * block_size
		w: block_size - 1
		h: block_size - 1
	}

	color := tetro_colors[color_index]

	player.renderer.set_draw_color(color)
	player.renderer.draw_fill_rect(rect)
	player.renderer.set_draw_color(bg_color)
}

fn (mut player Player) drop_tetro() {
	for i in 0..tetro_size {
		tetro := player.tetro[i]
		x := tetro.x + player.pos_x
		y := tetro.y + player.pos_y
		// Remember the color of each block
		// TODO: player.field[y][x] = player.tetro_idx + 1
		mut row := player.field[y]
		row[x] = player.tetro_idx + 1
	}
}

// Place a new tetro on top
fn (mut player Player) generate_tetro() {
	player.pos_y = 0
	player.pos_x = field_width / 2 - tetro_size / 2
	player.tetro_idx = player.rand_tetro()
	player.tetro_stats[player.tetro_idx]++
	player.tetro_total++
	player.rotation_idx = 0
	player.get_tetro()
}

// Get the right tetro from cache
fn (mut player Player) get_tetro() {
	idx := player.tetro_idx * tetro_size * tetro_size + player.rotation_idx * tetro_size
	player.tetro = player.tetros_cache[idx .. idx + tetro_size]
}

// input manages this game's input data as it comes in
// This is run in a separate thread
fn (mut player Player) input() {
	for player.state != .shutdown {
		select {
			event := <-player.input {
				match event.@type {
					.keydown {
						match event.key.input.key {
							player.k_fire  {
								player.ready = true
								player.events <- "action"
							}
							player.k_up    { player.rotate_tetro()     }
							player.k_left  { player.move_right(-1)     }
							player.k_right { player.move_right(1)      }
							player.k_down  { player.move_tetro()       } // drop faster when the player presses <down>
							else {}
						}
					}
					else {}
				}
			}
		}
	}

	player.wg.done()
}

// move_right
fn (mut player Player) move_right(dx int) bool {
	if player.state != .playing {
		return false
	}

	// Reached left/right edge or another tetro?
	for i in 0..tetro_size {
		tetro := player.tetro[i]
		y := tetro.y + player.pos_y
		x := tetro.x + player.pos_x + dx
		row := player.field[y]
		if row[x] != 0 {
			// Do not move
			return false
		}
	}
	player.pos_x += dx
	return true
}

// move_tetro
fn (mut player Player) move_tetro() {
	if player.state != .playing {
		return
	}

	// Check each block in current tetro
	for block in player.tetro {
		y := block.y + player.pos_y + 1
		x := block.x + player.pos_x
		// Reached the bottom of the screen or another block?
		// TODO: if player.field[y][x] != 0
		//if player.field[y][x] != 0 {
		row := player.field[y]
		if row[x] != 0 {
			// The new tetro has no space to drop => end of the game
			if player.pos_y < 2 {
				player.ready = false
				player.state = .gameover
				player.tetro_total = 0
				player.events <- "gameover"
				return
			}

			// Drop it and generate a new one
			player.drop_tetro()
			player.generate_tetro()
			player.events <- "play_block"
			return
		}
	}

	player.pos_y++
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

fn (mut player Player) parse_tetros() {
	for b_tetros in tetros {
		for b_tetro in b_tetros {
			for t in parse_binary_tetro(b_tetro) {
				player.tetros_cache << t
			}
		}
	}
}

pub fn (mut player Player) pause() {
	player.state = .paused
}

// rotate_tetro
fn (mut player Player) rotate_tetro() {
	if player.state != .playing {
		return
	}

	old_rotation_idx := player.rotation_idx
	player.rotation_idx++
	if player.rotation_idx == tetro_size {
		player.rotation_idx = 0
	}

	player.get_tetro()
	if !player.move_right(0) {
		player.rotation_idx = old_rotation_idx
		player.get_tetro()
	}

	if player.pos_x < 0 {
		player.pos_x = 1
	}
}

// rand_tetro generates a new tetro to use
fn (mut player Player) rand_tetro() int {
	cur := player.tetro_next
	player.tetro_next = int(player.rng.u32() % u32(tetros.len))
	return cur
}

pub fn (mut player Player) resume() {
	player.state = .playing
}

// start resets all game variables and sets the game state to active
pub fn (mut player Player) start(seed []u32) {
	player.rng = rand.new_default({ seed: seed })  // restart our seed so all players start the game
	player.score = 0
	player.tetro_total = 0
	player.tetro_stats = [0, 0, 0, 0, 0, 0, 0]
	player.parse_tetros()
	player.generate_tetro()
	player.field = []

	// Generate the field, fill it with 0's, add -1's on each edge
	for _ in 0..field_height + 2 {
		mut row := []int{ init: 0, len: field_width + 2, }
		row[0] = -1
		row[field_width + 1] = -1
		player.field << row
	}

	mut first_row := player.field[0]
	mut last_row := player.field[field_height + 1]
	for j in 0..field_width + 2 {
		first_row[j] = -1
		last_row[j] = -1
	}
	
	player.state = .playing
}

// update manages this game's state
// This is run in a separate thread
fn (mut player Player) update() {
	for player.state != .shutdown {
		if player.state == .playing {
			player.move_tetro()
			n := player.delete_completed_lines()
			if n > 0 {
				player.lines += n
			} else {
				if player.lines > 0 {
					if player.lines > 1 {
						player.events <- "play_double"
					} else if player.lines == 1 {
						player.events <- "play_single"
					}

					player.score += 10 * player.lines * player.lines
					player.lines = 0
				}
			}
		}

		vsdl.delay(player.update_rate)
	}

	player.wg.done()
}

pub fn (mut player Player) shutdown() {
	player.state = .shutdown
	player.wg.wait()
}