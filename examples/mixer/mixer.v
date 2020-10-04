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