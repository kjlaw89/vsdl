module main

import os
import vsdl
import vsdl.events
import vsdl.gfx
import vsdl.mixer

fn main() {
	mut window := gfx.create_window("VSDL Mixer Demo", -1, -1, 640, 480, .shown)?
	surface := window.get_surface()?
	surface.fill(r: 255, g: 255, b: 255)

	mixer.open(44100, .default, 2, 1024)?
	music1 := mixer.load_music(os.resource_abs_path("music-regular.mid"))?
	music2 := mixer.load_music(os.resource_abs_path("music-fast.mid"))?
	music1.fade_in(999, 5000)

	defer {
		mixer.close()
		surface.free()
		window.destroy()
		mixer.quit()
		vsdl.quit()
	}
	
	window.update()

	mut volume := 100
	mixer.set_music_volume(100)

	key_chan := events.create_watcher(10, .key)
	for events.run() {
		select {
			event := <-key_chan {
				match event.key.input.key {
					.key_up {
						volume = if volume + 1 > 128 { 128 } else { volume + 1 }
						mixer.set_music_volume(volume)
					}
					.key_down {
						volume = if volume - 1 <= 0 { 0 } else { volume - 1 }
						mixer.set_music_volume(volume)
					}
					.key_1, .key_kp_1 {
						music1.play(999)
					}
					.key_2, .key_kp_2 {
						music2.play(999)
					}
					else { }
				}
			}
			else {}
		}
	}
}