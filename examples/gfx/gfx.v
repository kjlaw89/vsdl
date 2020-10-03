module main

import vsdl
import vsdl.events
import vsdl.gfx

fn main() {
	mut window, mut renderer := gfx.create_window_and_renderer("VSDL Graphics Demo", -1, -1, 640, 480, .shown)?

	v_image := gfx.load_bmp("./v-logo.bmp")?
	v_texture := v_image.create_texture(renderer)?

	renderer.fill(r: 255, g: 255, b: 255)
	renderer.draw_fill_rect({ x: 0, y: 120, w: 640, h: 240 })
	renderer.render(v_texture, { x: 160, y: 120, w: 320, h: 240 })
	renderer.present()

	defer {
		v_texture.free()
		v_image.free()
		renderer.destroy()
		window.destroy()
		vsdl.quit()
	}
	
	window.update()
	events.loop()
}