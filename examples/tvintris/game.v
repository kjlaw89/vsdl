module main

import vsdl
import vsdl.events
import vsdl.gfx
import vsdl.ttf

struct Game {
mut:
	// Score of the current game
	score        int
	// Count consecutive lines for scoring
	lines        int
	// State of the current game
	state        GameState
	// X offset of the game display
	ofs_x        int
	// keys
	k_fire       int
	k_up         int
	k_down       int
	k_left       int
	k_right      int
	// game rand seed
	seed         int
	seed_ini     int
	// Position of the current tetro
	pos_x        int
	pos_y        int
	// field[y][x] contains the color of the block with (x,y) coordinates
	// "-1" border is to avoid bounds checking.
	// -1 -1 -1 -1
	// -1  0  0 -1
	// -1  0  0 -1
	// -1 -1 -1 -1
	field        [][]int
	// TODO: tetro Tetro
	tetro        []Block
	// TODO: tetros_cache []Tetro
	tetros_cache []Block
	// Index of the current tetro. Refers to its color.
	tetro_idx    int
	// Index of the next tetro. Refers to its color.
	tetro_next   int
	// tetro stats : buckets of drawn tetros
	tetro_stats  []int
	// total number of drawn tetros
	tetro_total  int
	// Index of the rotation (0-3)
	rotation_idx int
	
	render          gfx.Renderer
	font         ttf.Font
}
