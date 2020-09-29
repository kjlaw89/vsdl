module gfx

fn C.SDL_BlitSurface(voidptr, voidptr, voidptr, voidptr)
fn C.SDL_BlitScaled(voidptr, voidptr, voidptr, voidptr)
fn C.SDL_ConvertSurface(voidptr, u32) voidptr
fn C.SDL_CreateRGBSurface(u32, int, int, int, u32, u32, u32, u32) voidptr
fn C.SDL_CreateRGBSurfaceFrom(voidptr, int, int, int, int, u32, u32, u32, u32) voidptr
fn C.SDL_CreateSoftwareRenderer(voidptr) voidptr
fn C.SDL_CreateTextureFromSurface(voidptr, voidptr) voidptr
fn C.SDL_FillRect(voidptr, voidptr, u32)
fn C.SDL_FreeSurface(voidptr)
fn C.SDL_MapRGB(voidptr, byte, byte, byte) u32
fn C.SDL_SetColorKey(voidptr, bool, u32) int

pub fn create_surface(width, height, depth int, r, g, b, a u32) ?&Surface {
	new_surface := C.SDL_CreateRGBSurface(0, width, height, depth, r, g, b, a)

	if new_surface == 0 {
		return error(serror("Unable to create new surface"))
	}
	
	return new_surface
}

pub fn create_surface_from(data voidptr, width, height, depth, pitch int, r, g, b, a u32) ?&Surface {
	new_surface := C.SDL_CreateRGBSurfaceFrom(data, width, height, depth, pitch, r, g, b, a)

	if new_surface == 0 {
		return error(serror("Unable to create new surface"))
	}
	
	return new_surface
}

// blit_to copies the data from this `Surface` to another `Surface`
// with an optional source `Rect` and destination `Rect`
pub fn (surface &Surface) blit_to(dst_surface &Surface, src_rect, dst_rect &Rect) {
	C.SDL_BlitSurface(surface, src_rect, dst_surface, dst_rect)
}

// blit_scaled_to copies the pixels from this `Surface` to another `Surface`
// with an optional source `Rect` and destination `Rect` and scales as necessary
pub fn (surface &Surface) blit_scaled_to(dst_surface &Surface, src_rect, dst_rect &Rect) {
	C.SDL_BlitScaled(surface, src_rect, dst_surface, dst_rect)
}

// convert modifies the format of this surface and returns a new surface
pub fn (surface &Surface) convert(format &PixelFormat, flags u32) ?&Surface {
	new_surface := C.SDL_ConvertSurface(surface, format, flags)

	if new_surface == 0 {
		return error(serror("Unable to convert surface"))
	}
	
	return new_surface
}

// create_rendered that can be used for directly drawing to or rendering textures onto
pub fn (surface &Surface) create_renderer() ?Renderer {
	renderer := Renderer{ ptr: C.SDL_CreateSoftwareRenderer(surface) }

	if renderer.ptr == 0 {
		return error(serror("Unable to create new renderer"))
	}

	return renderer
}

pub fn (surface &Surface) create_texture(renderer Renderer) ?Texture {
	texture := Texture{ h: surface.get_height(), ptr: C.SDL_CreateTextureFromSurface(renderer.ptr, surface), w: surface.get_width() }

	if texture.ptr == 0 {
		return error(serror("Unable to create texture from surface"))
	}

	return texture
}

// fill_rect creates a filled in rectange on this surface
pub fn (surface &Surface) fill_rect(rect Rect, color u32) {
	C.SDL_FillRect(surface, &rect, color)
}

pub fn (surface &Surface) format_color(r, g, b byte) u32 {
	return C.SDL_MapRGB(surface.format, r, g, b)
}

pub fn (surface &Surface) free() {
	C.SDL_FreeSurface(surface)
}

pub fn (surface &Surface) get_flags() u32 {
	return surface.flags
}

pub fn (surface &Surface) get_format() &PixelFormat {
	return surface.format
}

pub fn (surface &Surface) get_height() int {
	return surface.h
}

pub fn (surface &Surface) get_pitch() int {
	return surface.pitch
}

pub fn (surface &Surface) get_rect() Rect {
	return { x: 0, y: 0, w: surface.get_width(), h: surface.get_height() }
}

pub fn (surface &Surface) get_width() int {
	return surface.w
}

pub fn (surface &Surface) set_color_key(enable bool, color u32) int {
	return C.SDL_SetColorKey(surface, enable, color)
}