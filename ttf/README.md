# VSDL TTF

VSDL implements the full SDL2 TTF extension to allow the use of TrueType fonts in your applications.

```v
module main

import vsdl
import vsdl.events
import vsdl.gfx
import vsdl.ttf

fn main() {
	mut window, mut renderer := gfx.create_window_and_renderer("VSDL Text Demo", -1, -1, 640, 480, .shown)?

	font_header := ttf.open_font("Roboto-Light.ttf", 100)?
	header := font_header.render_blended("Hello World!", { r: 0, g: 0, b: 0 })?
	header_texture := header.create_texture(renderer)?

	renderer.set_draw_color(r: 255, g: 255, b: 255)
	renderer.clear()
	renderer.set_draw_color(r: 0, g: 0, b: 0)
	renderer.render(header_texture, { x: 320 - (header.get_width() / 2), y: 240 - (header.get_height() / 2), w: header.get_width(), h: header.get_height() })
	renderer.present()

	defer {
		header.free()
		header_texture.free()
		renderer.destroy()
		window.destroy()
		ttf.quit()
		vsdl.quit()
	}
	
	window.update()
	events.loop()
}
```