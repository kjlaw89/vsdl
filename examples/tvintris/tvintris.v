module main

import math
import os
import rand
import rand.util
import time
import vsdl
import vsdl.events
import vsdl.gfx
import vsdl.image
import vsdl.mixer
import vsdl.ttf

const (
	title = "tVintris"

	// Assets
	base_dir = os.dir(os.real_path(os.executable()))
	font_path = os.join_path(base_dir, 'assets', 'PTMono-Regular.ttf')
	music_path = os.join_path(base_dir, 'assets', 'TwintrisThosenin.mod')
	sound_block_path = os.join_path(base_dir, 'assets', 'block.wav')
	sound_double_path = os.join_path(base_dir, 'assets', 'triple.wav')
	sound_line_path = os.join_path(base_dir, 'assets', 'single.wav')
	v_logo_path = os.join_path(base_dir, 'assets', 'v-logo_30_30.png')

	// Game Properties
	audio_buf_size = 1024
	block_size = 30 // pixels
	field_height = 20
	field_width = 10
	seed = util.time_seed_array(2)
	target_fps = u32(math.floor(1000.0 / 60.0))
	tetro_size = 4
	win_width = block_size * field_width * 3
	win_height = block_size * field_height

	// Controls
	p1_fire  = events.KeyCode.key_s
	p1_up    = events.KeyCode.key_w
	p1_down  = events.KeyCode.key_x
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

	bg_color =   gfx.Color{}
	fg_color =   gfx.Color{ r: 0,    g: 170,  b: 170  }
	text_color = gfx.Color{ r: 0xCA, g: 0x7D, b: 0x5F }
)

struct Block {
mut:
	x int
	y int
}

enum GameState {
	gameover gamestart init paused running shutdown
}

fn main() {
	println("tVintris -- tribute to venerable Twintris")

	mut window, mut renderer := gfx.create_window_and_renderer(title, -1, -1, win_width, win_height, .shown)?

	// Load in our assets and initialize basic game properties
	mut fonts := map[string]ttf.Font{}
	fonts["body"] = ttf.open_font(os.resource_abs_path("PTMono-Regular.ttf"), 18)?

	// Create a channel the "games" can use to communicate back to the main thread with
	// This can be used for playing sound effects or update other aspects of the game
	game_events := chan string{}

	// Initialize our games
	mut game1 := Game{
		events: game_events
		fonts: fonts
		input: events.create_watcher(100, .key)
		k_fire: p1_fire
		k_up: p1_up
		k_down: p1_down
		k_left: p1_left
		k_right: p1_right
		name: "Player 1"
		rng: rand.new_default({ seed: seed })
		renderer: renderer
	}

	mut game2 := Game{
		events: game_events
		fonts: fonts
		input: events.create_watcher(100, .key)
		k_fire: p2_fire
		k_up: p2_up
		k_down: p2_down
		k_left: p2_left
		k_right: p2_right
		name: "Player 2"
		rng: rand.new_default({ seed: seed })
		renderer: renderer
	}

	game1.init()
	game2.init()

	//v_image := gfx.load_bmp(os.resource_abs_path("v-logo.bmp"))?
	//v_texture := v_image.create_texture(renderer)?

	game1.start()
	game2.start()

	for events.run(false) {

		renderer.fill(bg_color)

		// Set left viewport and draw game 1
		renderer.set_viewport({ x: 0, y: 0, w: block_size * field_width + 2, h: win_height })
		game1.draw()

		// Set middle viewport
		renderer.set_viewport({ x: block_size * field_width + 2, y: 0, w: block_size * field_width, h: win_height })

		// Set right viewport and draw game 2
		renderer.set_viewport({ x: win_width - (block_size * field_width) + 2, y: 0, w: block_size * field_width + 2, h: win_height })
		game2.draw()

		renderer.present()
		vsdl.delay(target_fps)
	}

	game1.shutdown()
	game2.shutdown()

	renderer.destroy()
	window.destroy()
	mixer.quit()
	ttf.quit()
	vsdl.quit()

	window.update()
	events.loop()
}