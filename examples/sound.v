module main

import vsdl
import vsdl.audio
import vsdl.gfx
import vsdl.events

fn main() {
	mut window := gfx.create_window("VSDL Sound Demo", -1, -1, 640, 480, .shown)?
	surface := window.get_surface()?
	surface.fill_rect(surface.get_rect(), surface.format_color(255, 255, 255))
	
	window.update()

	mut audio_song    := audio.load_wav("./song.wav")?
	audio_devices := audio.get_devices() // returns a list of available output devices

	mut device := audio_devices[0]
	device.open(audio_song.get_spec())
	device.unpause()

	defer {
		audio_song.free()
		device.close()
		surface.free()
		window.destroy()
		vsdl.quit()
	}

	mut song := device.play(audio_song, 75)
	song.set_loop(true)

	key_chan := events.create_watcher(10, .key)

	for events.run() {
		select {
			event := <-key_chan {
				match event.key.input.key {
					.key_up { 
						volume := song.get_volume()
						song.set_volume(volume + 1)
					}
					.key_down {
						volume := song.get_volume()
						song.set_volume(volume - 1)
					}
					.key_left {
						pos := song.get_pos()
						song.set_pos(pos - 1)
					}
					.key_right {
						pos := song.get_pos()
						song.set_pos(pos + 1)
					}
					else { }
				}
			}
			else {}
		}
	}
}