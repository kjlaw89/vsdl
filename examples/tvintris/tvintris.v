module main

import math
import os
import rand
import rand.util
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

	bg_color          = gfx.Color{}
	dialog_color      = gfx.Color{ r: 125, g: 125, b: 125 }
	fg_color          = gfx.Color{ r: 0,   g: 170, b: 170 }
	text_color        = gfx.Color{ r: 255, g: 255, b: 255 }
)

struct Block {
mut:
	x int
	y int
}

enum GameState {
	gameover init playing paused running shutdown
}

fn main() {
	println("tVintris -- tribute to venerable Twintris")

	mut window, mut renderer := gfx.create_window_and_renderer(title, -1, -1, win_width, win_height, .shown)?

	// Load in our assets and initialize basic game properties
	mut fonts := map[string]ttf.Font{}
	fonts["header"] = ttf.open_font(os.resource_abs_path("PTMono-Regular.ttf"), 32)?
	fonts["subheader"] = ttf.open_font(os.resource_abs_path("PTMono-Regular.ttf"), 24)?
	fonts["body"] = ttf.open_font(os.resource_abs_path("PTMono-Regular.ttf"), 18)?

	// Load in music and effects
	mixer.open(44100, .default, 2, 1024)?

	mut music := map[string]mixer.Music
	music["bg"] = mixer.load_music(music_path)?

	mut effects := map[string]&mixer.Chunk
	effects["block"] = mixer.load_chunk(sound_block_path)?
	effects["double"] = mixer.load_chunk(sound_double_path)?
	effects["line"] = mixer.load_chunk(sound_line_path)?

	// Load in images
	mut images := map[string]&gfx.Surface
	images["v-logo"] = image.load(v_logo_path)?

	mut game := Game{
		effects: effects
		fonts: fonts
		images: images
		music: music
		renderer: renderer
	}

	game.run()

	unsafe {
		for k, _ in fonts {
			mut f := &fonts[k]
			f.free()
		}

		for k, _ in music {
			mut m := &music[k]
			m.free()
		}

		for k, _ in effects {
			mut e := &effects[k]
			e.free()
		}
	}

	renderer.destroy()
	window.destroy()
	mixer.quit()
	ttf.quit()
	vsdl.quit()

	window.update()
	events.loop()
}