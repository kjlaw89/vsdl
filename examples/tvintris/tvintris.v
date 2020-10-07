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
	music_path = os.join_path(base_dir, 'assets', 'TwintrisThosenine.mod')
	sound_block_path = os.join_path(base_dir, 'assets', 'block.wav')
	sound_double_path = os.join_path(base_dir, 'assets', 'triple.wav')
	sound_line_path = os.join_path(base_dir, 'assets', 'single.wav')
	v_logo_path = os.join_path(base_dir, 'assets', 'v-logo_30_30.png')

	// Game Properties
	audio_buf_size = 1024
	block_size = 30 // pixels
	field_height = 20
	field_width = 10
	game_width = block_size * field_width + 2
	game_height = block_size * field_height
	seed = util.time_seed_array(2)
	target_fps = u32(math.floor(1000.0 / 60.0))
	tetro_size = 4
	win_width = block_size * field_width * 3
	win_height = block_size * field_height

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

	// Load in music and effects
	mixer.open(44100, .default, 2, 1024)?
	music1 := mixer.load_music(music_path)?
	music1.fade_in(999, 2000)

	mut effects := map[string]&mixer.Chunk
	effects["block"] = mixer.load_chunk(sound_block_path)?
	effects["double"] = mixer.load_chunk(sound_double_path)?
	effects["line"] = mixer.load_chunk(sound_line_path)?

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
		renderer.set_draw_color(fg_color)
		renderer.draw_line({ x: game_width - 2, y: 0 }, { x: game_width - 2, y: win_height })
		renderer.draw_line({ x: game_width * 2 - 4, y: 0 }, { x: game_width * 2 - 4, y: win_height })

		// Set left viewport and draw game 1
		renderer.set_viewport({ x: 0, y: 0, w: game_width, h: win_height })
		game1.draw()

		// Set middle viewport
		renderer.set_viewport({ x: game_width, y: 0, w: block_size * field_width, h: win_height })

		// Set right viewport and draw game 2
		renderer.set_viewport({ x: win_width - (block_size * field_width) + 2, y: 0, w: game_width, h: win_height })
		game2.draw()

		// Reset the viewport back to the whole window
		renderer.set_viewport({ x: 0, y: 0, w: win_width, h: win_height })

		draw_pause(renderer)

		// Handle queued up events
		for {
			select {
				event := <-game_events {
					match event {
						"pause"       {
							
						}
						"play_block"  { effects["block"].play(0, 0)  }
						"play_double" { effects["double"].play(0, 0) }
						"play_single" { effects["single"].play(0, 0) }
						else {}
					}
				}
				else { break }
			}
		}

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

fn draw_pause(renderer gfx.Renderer) {
	renderer.set_draw_color({ r: 0, g: 0, b: 0, a: 175})
	renderer.set_blend_mode(.blend)
	renderer.draw_fill_rect({ x: 0, y: 0, w: win_width, h: win_height })
}