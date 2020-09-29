# VSDL Graphics

VSDL implements most of the standard graphics API provided by SDL2 with few changes. Most calls have been consolidated to `structs` with methods (i.e. `SDL_GetWindowTitle()` -> `window.get_title()`). This should make it easy to convert existing code to VSDL.

```v
module main

import vsdl
import vsdl.events
import vsdl.gfx

fn main() {
	mut window, mut renderer := gfx.create_window_and_renderer("VSDL Graphics Demo", -1, -1, 640, 480, .shown)?

	v_image := gfx.load_bmp("./v-logo.bmp")?
	v_texture := v_image.create_texture(renderer)?

	renderer.set_draw_color(255, 255, 255, 255)
	renderer.clear()
	renderer.set_draw_color(0, 0, 0, 255)
	renderer.draw_fill_rect({ x: 0, y: 120, w: 640, h: 240 })
	renderer.render(v_texture, { x: 160, y: 120, w: 320, h: 240 })
	renderer.present()
	
	window.update()
	events.loop()

	renderer.destroy()
	v_image.free()
	window.destroy()
	vsdl.quit()
}
```