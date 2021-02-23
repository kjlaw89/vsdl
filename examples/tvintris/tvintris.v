module main

import math
import os
import vsdl
import vsdl.gfx
import vsdl.image
import vsdl.mixer
import vsdl.ttf

const (
	title             = 'tVintris'
	// Assets
	base_dir          = os.dir(os.real_path(os.executable()))
	font_path         = os.join_path(base_dir, 'assets', 'PTMono-Regular.ttf')
	music_path        = os.join_path(base_dir, 'assets', 'TwintrisThosenine.mod')
	sound_block_path  = os.join_path(base_dir, 'assets', 'block.wav')
	sound_double_path = os.join_path(base_dir, 'assets', 'triple.wav')
	sound_line_path   = os.join_path(base_dir, 'assets', 'single.wav')
	v_logo_path       = os.join_path(base_dir, 'assets', 'v-logo_30_30.png')
	// Game Properties
	audio_buf_size    = 1024
	block_size        = 30 // pixels
	field_height      = 20
	field_width       = 10
	game_width        = block_size * field_width + 2
	game_height       = block_size * field_height
	target_fps        = u32(math.floor(1000.0 / 60.0))
	tetro_size        = 4
	win_width         = block_size * field_width * 3
	win_height        = block_size * field_height
	// Basic color scheme
	bg_color          = gfx.Color{}
	dialog_color      = gfx.Color{
		r: 125
		g: 125
		b: 125
	}
	fg_color          = gfx.Color{
		r: 0
		g: 170
		b: 170
	}
	text_color        = gfx.Color{
		r: 255
		g: 255
		b: 255
	}
)

struct Block {
mut:
	x int
	y int
}

enum GameState {
	gameover
	init
	playing
	paused
	running
	shutdown
}

fn main() {
	println('tVintris -- tribute to venerable Twintris')
	mut window, mut renderer := gfx.create_window_and_renderer(title, -1, -1, win_width,
		win_height, .shown) ?
	mixer.open(44100, .default, 2, 1024) ?
	// Load in our fonts, music, effects and images
	mut fonts := map[string]ttf.Font{}
	fonts['header'] = ttf.open_font(os.resource_abs_path('PTMono-Regular.ttf'), 32) ?
	fonts['subheader'] = ttf.open_font(os.resource_abs_path('PTMono-Regular.ttf'), 24) ?
	fonts['body'] = ttf.open_font(os.resource_abs_path('PTMono-Regular.ttf'), 18) ?
	mut music := map[string]mixer.Music{}
	music['bg'] = mixer.load_music(music_path) ?
	mut effects := map[string]&mixer.Chunk{}
	effects['block'] = mixer.load_chunk(sound_block_path) ?
	effects['double'] = mixer.load_chunk(sound_double_path) ?
	effects['line'] = mixer.load_chunk(sound_line_path) ?
	mut images := map[string]&gfx.Surface{}
	images['v-logo'] = image.load(v_logo_path) ?
	// Create our game object and pass in our assets
	// The game struct will handle all input and drawing
	mut game := Game{
		effects: effects
		fonts: fonts
		images: images
		music: music
		renderer: renderer
	}
	// Once `run` is called the game will continue until the window is closed
	game.run() ?
	mixer.close()
	renderer.destroy()
	window.destroy()
	mixer.quit()
	ttf.quit()
	vsdl.quit()
}
