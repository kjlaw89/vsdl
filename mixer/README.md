# VSDL Mixer

VSDL implements the full SDL2 Mixer extension. Calling `load_music` or `load_chunk` will return back a wrapped `Music` or `Chunk` object. `Chunk`s can be played on various channels, while only one `Music` track can be played at any given time.

`load_chunk` can load `.wav`, `.aiff`, `.riff`, `.ogg` and `.vof` files

`load_music` can load `.wav`, `.mod`, `.mid`/`.midi`, `.ogg`, `.mp3` and `.flac` files

```v
module main

import vsdl
import vsdl.events
import vsdl.gfx
import vsdl.mixer

fn main() {
	mut window := gfx.create_window("VSDL Mixer Demo", -1, -1, 640, 480, .shown)?
	surface := window.get_surface()?
	surface.fill(r: 255, g: 255, b: 255)

	mixer.open(44100, .default, 2, 1024)?
	music := mixer.load_music(os.resource_abs_path("music-regular.mid"))?
	music.play(999)

	defer {
		mixer.close()
		surface.free()
		window.destroy()
		mixer.quit()
		vsdl.quit()
	}
	
	window.update()
	events.loop()
}
```