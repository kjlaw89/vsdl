module main

import vsdl
import vsdl.events
import vsdl.gfx
import vsdl.mixer

fn main() {
	mut window := gfx.create_window("VSDL Mixer Demo", -1, -1, 640, 480, .shown)?
	surface := window.get_surface()?
	surface.fill(r: 255, g: 255, b: 255)

	defer {
		surface.free()
		window.destroy()
		vsdl.quit()
	}
	
	window.update()
	events.loop()
}