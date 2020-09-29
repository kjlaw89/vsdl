module main

import vsdl
import vsdl.events
import vsdl.gfx

fn main() {
	mut window := gfx.create_window("VSDL Basic Demo", -1, -1, 640, 480, .shown)?
	surface := window.get_surface()?
	surface.fill_rect(surface.get_rect(), surface.format_color(255, 255, 255))

	defer {
		surface.free()
		window.destroy()
		vsdl.quit()
	}
	
	window.update()
	events.loop()
}