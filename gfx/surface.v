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
fn C.SDL_SetColorKey(voidptr, bool, u32) int

// create_surface creates a new surface object from the provided details
pub fn create_surface(width, height, depth int, color Color) ?&Surface {
	new_surface := C.SDL_CreateRGBSurface(0, width, height, depth, color.r, color.g, color.b, color.a)

	if new_surface == 0 {
		return error(serror("Unable to create new surface"))
	}
	
	return new_surface
}

// create_surface_from creates a new surface from the object using the memory passed in
pub fn create_surface_from(data voidptr, width, height, depth, pitch int, color Color) ?&Surface {
	new_surface := C.SDL_CreateRGBSurfaceFrom(data, width, height, depth, pitch, color.r, color.g, color.b, color.a)

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

// create_texture for the provided renderer
pub fn (surface &Surface) create_texture(renderer Renderer) ?Texture {
	texture := Texture{
		h: surface.get_height(),
		ptr: C.SDL_CreateTextureFromSurface(renderer.ptr, surface),
		w: surface.get_width()
	}

	if texture.ptr == 0 {
		return error(serror("Unable to create texture from surface"))
	}

	return texture
}

// fill fills the surface with the provided color
pub fn (surface &Surface) fill(color Color) {
	rect := surface.get_rect()
	C.SDL_FillRect(surface, &rect, surface.format.map_rgb(color.r, color.g, color.b))
}

// fill_rect creates a filled in rectange on this surface
pub fn (surface &Surface) fill_rect(rect Rect, color Color) {
	C.SDL_FillRect(surface, &rect, surface.format.map_rgb(color.r, color.g, color.b))
}

// format_color formats the color into the same `PixelFormat` used by the `Surface`
pub fn (surface &Surface) format_color(color Color) u32 {
	return surface.format.map_rgb(color.r, color.g, color.b)
}

// free frees the memory associated with the `Surface`
pub fn (surface &Surface) free() {
	C.SDL_FreeSurface(surface)
}

// get_flags returns the flags set for this `Surface`
pub fn (surface &Surface) get_flags() u32 {
	return surface.flags
}

// get_format returns the `PixelFormat` this `Surface` currently has
pub fn (surface &Surface) get_format() &PixelFormat {
	return surface.format
}

// get_height returns the height of the `Surface`
pub fn (surface &Surface) get_height() int {
	return surface.h
}

// get_pitch returns the pitch of the `Surface`
pub fn (surface &Surface) get_pitch() int {
	return surface.pitch
}

// get_rect returns a `Rect` for this `Surface`
pub fn (surface &Surface) get_rect() Rect {
	return { x: 0, y: 0, w: surface.get_width(), h: surface.get_height() }
}

// get_width returns the width for this `Surface`
pub fn (surface &Surface) get_width() int {
	return surface.w
}

// set_color_key enables or disables the `color` key that was provided
pub fn (surface &Surface) set_color_key(enable bool, color u32) int {
	return C.SDL_SetColorKey(surface, enable, color)
}