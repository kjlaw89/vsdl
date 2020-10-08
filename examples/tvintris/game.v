module main

import rand
//import time
import vsdl
import vsdl.events
import vsdl.gfx
import vsdl.mixer
import vsdl.ttf

struct Game {
	events     chan string = chan string{}
mut:
	effects    map[string]&mixer.Chunk
	fonts      map[string]ttf.Font
	images     map[string]&gfx.Surface
	music      map[string]mixer.Music
	players    []Player
	renderer   gfx.Renderer
	state      GameState   = .init
}

pub fn (mut game Game) run() {
	game.music["bg"].fade_in(999, 2000)

	// Initialize our games
	mut player1 := Player{
		events: game.events
		input: events.create_watcher(100, .key)
		k_fire: p1_fire
		k_up: p1_up
		k_down: p1_down
		k_left: p1_left
		k_right: p1_right
		name: "Player 1"
		rng: rand.new_default({ seed: seed })
		renderer: game.renderer
	}

	mut player2 := Player{
		events: game.events
		input: events.create_watcher(100, .key)
		k_fire: p2_fire
		k_up: p2_up
		k_down: p2_down
		k_left: p2_left
		k_right: p2_right
		name: "Player 2"
		rng: rand.new_default({ seed: seed })
		renderer: game.renderer
	}

	game.players << player1
	game.players << player2
	game.players_init()

	for events.run(false) {

		// Clear the screen and re-draw the borders
		game.renderer.fill(bg_color)
		game.renderer.set_draw_color(fg_color)
		game.renderer.draw_line({ x: game_width - 2, y: 0 }, { x: game_width - 2, y: win_height })
		game.renderer.draw_line({ x: game_width * 2 - 4, y: 0 }, { x: game_width * 2 - 4, y: win_height })

		// Set left viewport and draw game 1
		game.renderer.set_viewport({ x: 0, y: 0, w: game_width, h: game_height })
		game.players[0].draw()

		// Set middle viewport
		game.renderer.set_viewport({ x: game_width, y: 0, w: block_size * field_width, h: win_height })

		// Set right viewport and draw game 2
		game.renderer.set_viewport({ x: win_width - (block_size * field_width) + 2, y: 0, w: game_width, h: win_height })
		game.players[1].draw()

		if game.state == .init {
			game.draw_dialog("Start Game", "Hit 'Q' and 'L' to start.")
		}

		if game.state == .paused {
			game.draw_dialog("Game Paused", "Hit 'Q' or 'L' to resume.")
		}

		if game.state == .gameover {
			game.draw_dialog("Game Over", "Hit 'Q' and 'L' to start.")
		}

		// Reset the viewport back to the whole window
		game.renderer.set_viewport({ x: 0, y: 0, w: win_width, h: win_height })

		// Handle queued up events
		for {
			select {
				event := <-game.events {
					match event {
						"action" {
							if game.state in [.init, .gameover] && game.players_ready() {
								game.players_start()
								continue
							}

							if game.state == .playing {
								game.players_pause()
								continue
							}

							if game.state == .paused {
								game.players_resume()
								continue
							}
						}
						"gameover" {
							if game.players_gameover() {
								game.state = .gameover
							}
						}
						"play_block"  { game.effects["block"].play(0, 0)  }
						"play_double" { game.effects["double"].play(0, 0) }
						"play_single" { game.effects["single"].play(0, 0) }
						else {}
					}
				}
				else { break }
			}
		}

		game.renderer.present()
		vsdl.delay(target_fps)
	}

	game.players_shutdown()
}

fn (game Game) draw_dialog(header, body string) ? {
	width := 350
	height := 130
	
	// Draw transparent BG
	game.renderer.set_viewport({ x: 0, y: 0, w: win_width, h: win_height })
	game.renderer.set_draw_color({ r: 0, g: 0, b: 0, a: 175})
	game.renderer.set_blend_mode(.blend)
	game.renderer.draw_fill_rect({ x: 0, y: 0, w: win_width, h: win_height })

	// Render dialog
	game.renderer.set_viewport({
		x: win_width / 2 - 175,
		y: win_height / 3 - 65,
		w: width,
		h: height
	})
	game.renderer.set_blend_mode(.@none)
	game.renderer.set_draw_color(dialog_color)
	game.renderer.draw_fill_rect({ x: 0, y: 0, w: width, h: height })

	h_text := game.fonts["subheader"].render_blended(header, text_color)?
	h_text_texture := h_text.create_texture(game.renderer)?

	b_text := game.fonts["body"].render_blended(body, text_color)?
	b_text_texture := b_text.create_texture(game.renderer)?

	game.renderer.render(h_text_texture, { x: (width / 2) - (h_text.get_width() / 2), y: 20, w: h_text.get_width(), h: h_text.get_height() })
	game.renderer.render(b_text_texture, { x: (width / 2) - (b_text.get_width() / 2), y: 80, w: b_text.get_width(), h: b_text.get_height() })

	h_text_texture.free()
	b_text_texture.free()
	h_text.free()
	b_text.free()
}

fn (game Game) draw_center() {

}

fn (game Game) players_gameover() bool {
	for p in 0..game.players.len {
		mut player := &game.players[p]
		if player.state != .gameover {
			return false
		}
	}

	return true
}

fn (game Game) players_init() {
	for p in 0..game.players.len {
		mut player := &game.players[p]
		player.init()
	}
}

fn (mut game Game) players_pause() {
	for p in 0..game.players.len {
		mut player := &game.players[p]
		player.pause()
	}

	game.state = .paused
}

fn (game Game) players_ready() bool {
	for p in 0..game.players.len {
		mut player := &game.players[p]
		if !player.ready {
			return false
		}
	}

	return true
}

fn (mut game Game) players_resume() {
	for p in 0..game.players.len {
		mut player := &game.players[p]
		player.resume()
	}

	game.state = .playing
}

fn (game Game) players_shutdown() {
	for p in 0..game.players.len {
		mut player := &game.players[p]
		player.shutdown()
	}
}

fn (mut game Game) players_start() {
	for p in 0..game.players.len {
		mut player := &game.players[p]
		player.start()
	}

	game.state = .playing
}