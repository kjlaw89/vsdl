module main

import vsdl
import vsdl.events
import vsdl.gfx
import vsdl.ttf

fn main() {
	mut window, mut renderer := gfx.create_window_and_renderer("VSDL Text Demo", -1, -1, 640, 480, .shown)?

	font_header := ttf.open_font("Roboto-Light.ttf", 100)?
	font_subheader := ttf.open_font("Roboto-Light.ttf", 32)?
	font_body := ttf.open_font("PTMono-Regular.ttf", 18)?

	renderer.fill(r: 255, g: 255, b: 255)

	header := font_header.render_blended("VSDL", { r: 0, g: 0, b: 0 })?
	header_texture := header.create_texture(renderer)?

	subheader := font_subheader.render_shaded("SDL2 in V", { r: 255, g: 255, b: 255 }, { r: 0, g: 0, b: 0 })?
	subheader_texture := subheader.create_texture(renderer)?

	body1 := font_body.render_blended("This is a basic example that", { r: 0, g: 0, b: 0})?
	body2 := font_body.render_blended("shows off TTF rendering with SDL2!", { r: 0, g: 0, b: 0})?
	body1_texture := body1.create_texture(renderer)?
	body2_texture := body2.create_texture(renderer)?

	renderer.render(header_texture, { x: 320 - (header.get_width() / 2), y: 20, w: header.get_width(), h: header.get_height() })
	renderer.render(subheader_texture, { x: 320 - (subheader.get_width() / 2), y: header.get_height() + 30, w: subheader.get_width(), h: subheader.get_height() })
	renderer.render(body1_texture, { x: 320 - (body1.get_width() / 2), y: 300, w: body1.get_width(), h: body1.get_height() })
	renderer.render(body2_texture, { x: 320 - (body2.get_width() / 2), y: 300 + body1.get_height() + 5, w: body2.get_width(), h: body2.get_height() })
	renderer.present()

	defer {
		header.free()
		subheader.free()
		body1.free()
		body2.free()
		header_texture.free()
		subheader_texture.free()
		body1_texture.free()
		body2_texture.free()
		font_header.free()
		font_subheader.free()
		renderer.destroy()
		window.destroy()
		ttf.quit()
		vsdl.quit()
	}
	
	window.update()
	events.loop()
}