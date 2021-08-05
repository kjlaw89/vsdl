module main

// import time
import rand.seed as rseed
import vsdl
import vsdl.events
import vsdl.gfx
import vsdl.mixer
import vsdl.ttf

struct Game {
	events chan string = chan string{}
mut:
	effects      map[string]&mixer.Chunk
	fonts        map[string]ttf.Font
	images       map[string]&gfx.Surface
	logo_texture gfx.Texture
	music        map[string]mixer.Music
	players      []Player
	renderer     gfx.Renderer
	state        GameState = .init
}

// run is the main `Game` loop - this initializes the
// the players and draws all of the graphics. This method
// only returns when the game window is closed.
pub fn (mut game Game) run() ? {
	game.music['bg'].fade_in(999, 2000)
	game.logo_texture = game.images['v-logo'].create_texture(game.renderer) or {
		game.renderer.create_texture(.rgba32, .@static, 1, 1) ?
	}
	// Initialize our players
	mut player1 := Player{
		events: game.events
		input: events.create_watcher(100, .key)
		k_fire: p1_fire
		k_up: p1_up
		k_down: p1_down
		k_left: p1_left
		k_right: p1_right
		name: 'Player 1'
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
		name: 'Player 2'
		renderer: game.renderer
	}
	game.players << player1
	game.players << player2
	game.players_init()
	// Start our event loop (use `false` to allow us to manage the delay)
	for events.run(false) {
		// Reset the viewport back to the whole window and clear the screen
		game.renderer.set_viewport()
		game.renderer.fill_viewport(bg_color)
		// Clear the screen and re-draw the borders
		game.renderer.set_draw_color(fg_color)
		game.renderer.draw_line(gfx.Point{
			x: game_width - 2
			y: 0
		}, gfx.Point{
			x: game_width - 2
			y: win_height
		})
		game.renderer.draw_line(gfx.Point{
			x: game_width * 2 - 4
			y: 0
		}, gfx.Point{
			x: game_width * 2 - 4
			y: win_height
		})
		// Set left viewport and draw game 1
		game.renderer.set_viewport(
			x: 0
			y: 0
			w: game_width
			h: game_height
		)
		game.players[0].draw()
		// Set middle viewport
		game.renderer.set_viewport(
			x: game_width
			y: 0
			w: block_size * field_width
			h: win_height
		)
		game.draw_center() ?
		// Set right viewport and draw game 2
		game.renderer.set_viewport(
			x: win_width - (block_size * field_width) + 2
			y: 0
			w: game_width
			h: win_height
		)
		game.players[1].draw()
		if game.state == .init {
			game.draw_dialog('Start Game', "Hit 'Q' and 'L' to start.") ?
		}
		if game.state == .paused {
			game.draw_dialog('Game Paused', "Hit 'Q' or 'L' to resume.") ?
		}
		if game.state == .gameover {
			game.draw_dialog('Game Over', "Hit 'Q' and 'L' to start.") ?
		}
		// Handle queued up events from the players
		for {
			select {
				event := <-game.events {
					match event {
						'action' {
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
						'gameover' {
							if game.players_gameover() {
								game.state = .gameover
							}
						}
						'play_block' {
							game.effects['block'].play(0, 0)
						}
						'play_double' {
							game.effects['double'].play(0, 0)
						}
						'play_single' {
							game.effects['single'].play(0, 0)
						}
						else {}
					}
				}
				else {
					break
				}
			}
		}
		game.renderer.present()
		vsdl.delay(target_fps)
	}
	game.players_shutdown()
}

// draw_dialog draws a basic dialog on the screen
// The dialog can display a `header` and `body` for instructions
fn (game Game) draw_dialog(header string, body string) ? {
	width := 350
	height := 130
	// Draw transparent BG
	game.renderer.set_viewport(
		x: 0
		y: 0
		w: win_width
		h: win_height
	)
	game.renderer.set_draw_color(
		r: 0
		g: 0
		b: 0
		a: 175
	)
	game.renderer.set_blend_mode(.blend)
	game.renderer.draw_fill_rect(
		x: 0
		y: 0
		w: win_width
		h: win_height
	)
	// Render dialog
	game.renderer.set_viewport(
		x: win_width / 2 - 175
		y: win_height / 3 - 65
		w: width
		h: height
	)
	game.renderer.set_blend_mode(.@none)
	game.renderer.set_draw_color(dialog_color)
	game.renderer.draw_fill_rect(
		x: 0
		y: 0
		w: width
		h: height
	)
	h_text := game.fonts['subheader'].render_blended(header, text_color) ?
	h_text_texture := h_text.create_texture(game.renderer) ?
	b_text := game.fonts['body'].render_blended(body, text_color) ?
	b_text_texture := b_text.create_texture(game.renderer) ?
	game.renderer.render(h_text_texture, 
		x: (width / 2) - (h_text.get_width() / 2)
		y: 20
		w: h_text.get_width()
		h: h_text.get_height()
	)
	game.renderer.render(b_text_texture, 
		x: (width / 2) - (b_text.get_width() / 2)
		y: 80
		w: b_text.get_width()
		h: b_text.get_height()
	)
	h_text_texture.free()
	b_text_texture.free()
	h_text.free()
	b_text.free()
}

// draw_center draws the center section (logo, title and play info)
fn (game Game) draw_center() ? {
	game.renderer.render(game.logo_texture, 
		x: game_width / 2 - game.logo_texture.get_width() / 2
		y: 20
		w: game.logo_texture.get_width()
		h: game.logo_texture.get_height()
	)
	h_text := game.fonts['header'].render_blended(title, text_color) ?
	h_text_texture := h_text.create_texture(game.renderer) ?
	game.renderer.render(h_text_texture, 
		x: (game_width / 2) - (h_text.get_width() / 2)
		y: 80
		w: h_text.get_width()
		h: h_text.get_height()
	)
	h_text_texture.free()
	h_text.free()
	mut y_offset := 200
	for player in game.players {
		p_text := game.fonts['subheader'].render_blended(player.name, text_color) ?
		p_text_texture := p_text.create_texture(game.renderer) ?
		mut score := '$player.score'
		if score.len < 10 {
			score = '0'.repeat(10 - score.len) + score
		}
		s_text := game.fonts['subheader'].render_blended(score, text_color) ?
		s_text_texture := s_text.create_texture(game.renderer) ?
		game.renderer.render(p_text_texture, 
			x: (game_width / 2) - (p_text.get_width() / 2)
			y: y_offset
			w: p_text.get_width()
			h: p_text.get_height()
		)
		game.renderer.render(s_text_texture, 
			x: (game_width / 2) - (s_text.get_width() / 2)
			y: y_offset + 60
			w: s_text.get_width()
			h: s_text.get_height()
		)
		y_offset += 200
		p_text_texture.free()
		s_text_texture.free()
		p_text.free()
		s_text.free()
	}
}

// players_gameover returns true if all players report `.gameover`
fn (game Game) players_gameover() bool {
	for p in 0 .. game.players.len {
		mut player := &game.players[p]
		if player.state != .gameover {
			return false
		}
	}
	return true
}

// players_init initializes all of the players
fn (game Game) players_init() {
	for p in 0 .. game.players.len {
		mut player := &game.players[p]
		player.init()
	}
}

// players_pause updates the players and current game.state to `.paused`
fn (mut game Game) players_pause() {
	for p in 0 .. game.players.len {
		mut player := &game.players[p]
		player.pause()
	}
	game.state = .paused
}

// players_reader returns true if all players have acknowledge that they're ready
fn (game Game) players_ready() bool {
	for p in 0 .. game.players.len {
		mut player := &game.players[p]
		if !player.ready {
			return false
		}
	}
	return true
}

// players_resume updates the players and current game.state to `.playing`
fn (mut game Game) players_resume() {
	for p in 0 .. game.players.len {
		mut player := &game.players[p]
		player.resume()
	}
	game.state = .playing
}

// players_shutdown shuts down each player and waits for them to deinitialize
fn (game Game) players_shutdown() {
	for p in 0 .. game.players.len {
		mut player := &game.players[p]
		player.shutdown()
	}
}

// players_start starts the game for both players
fn (mut game Game) players_start() {
	seed := rseed.time_seed_array(2)
	for p in 0 .. game.players.len {
		mut player := &game.players[p]
		player.start(seed)
	}
	game.state = .playing
}
