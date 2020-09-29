# VSDL Audio

VSDL Implements the standard Audio library provided by SDL with some minor improvements. It can be a bit cumbersome to play audio via the standard library without using the Mixer extension. This module aims to simplify that a bit and provides the ability to control playback for each individual track.

```v
module main

import vsdl
import vsdl.audio
import vsdl.gfx
import vsdl.events

fn main() {
	mut window := gfx.create_window("Simple VSDL Window", -1, -1, 640, 480, .shown)?
	surface := window.get_surface()?
	surface.fill_rect(surface.get_rect(), surface.format_color(255, 255, 255))
	
	window.update()

	mut audio_song    := audio.load_wav("./song.wav")?
	audio_devices := audio.get_devices() // returns a list of available output devices

	mut device := audio_devices[3] // adjust to the device on your computer
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
```

The `vsdl.mixer` module has more control for channels and the ability to import different types of file types. The `vsdl.audio` module is more simpler use cases where a `wav` is fine for use.

## Multiple Tracks

This module automatically handles mixing the audio tracks together. It's possible to call `AudioDevice.play(AudioData, :volume)` as many times as you want. Each call returns back a copy of the provided `AudioData` file, with which it's possible to control the playback (position, volume, etc) for that specific audio track.

## Memory

The `AudioData` that is returned from `.play()` is a copy of the original and all of the struct values *but* the audio data itself. Attempting to call `AudioData.free()` on a copy will return `false`. Call `.free()` on the original `AudioData` object to free its memory.