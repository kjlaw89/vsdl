module main

import vsdl
import vsdl.events
import vsdl.gfx
import vsdl.image

fn main() {
	mut window, mut renderer := gfx.create_window_and_renderer("VSDL Graphics Demo", -1, -1, 640, 480, .shown)?

	v_image := image.load("./v-logo.png")?
	v_texture := v_image.create_texture(renderer)?

	sdl_image := image.load("./sdl-logo.png")?
	sdl_texture := sdl_image.create_texture(renderer)?

	bg_image := image.load("./bg.jpg")?
	bg_texture := bg_image.create_texture(renderer)?

	renderer.fill(r: 255, g: 255, b: 255)
	renderer.render(bg_texture, { x: 0, y: 0, w: 640, h: 480 })
	renderer.render(v_texture, { x: 110, y: 150, w: 120, h: 120 })
	renderer.render(sdl_texture, { x: 340, y: 165, w: 179, h: 99 })
	renderer.present()

	defer {
		v_texture.free()
		v_image.free()
		sdl_texture.free()
		sdl_image.free()
		bg_texture.free()
		bg_image.free()
		renderer.destroy()
		window.destroy()
		vsdl.quit()
	}
	
	window.update()
	events.loop()
}