module gfx

fn C.SDL_DestroyTexture(voidptr)
//fn C.SDL_LockTexture(voidptr)
fn C.SDL_GetTextureAlphaMod(voidptr, byte) byte
fn C.SDL_GetTextureBlendMode(voidptr, u32) int
fn C.SDL_GetTextureColorMod(voidptr, byte, byte, byte) int
fn C.SDL_QueryTexture(voidptr, voidptr, voidptr, voidptr, voidptr)
fn C.SDL_SetTextureAlphaMod(voidptr, byte) int
fn C.SDL_SetTextureBlendMode(voidptr, u32) int
fn C.SDL_SetTextureColorMod(voidptr, byte, byte, byte) int
//fn C.SDL_UnlockTexture(voidptr)
fn C.SDL_UpdateTexture(voidptr)

pub fn (texture Texture) free() {
	if texture.ptr == 0 {
		return
	}

	C.SDL_DestroyTexture(texture.ptr)
}

// get_alpha gets the alpha value of the texture
pub fn (texture Texture) get_alpha() byte {
	alpha := byte(0)
	C.SDL_GetTextureAlphaMod(texture.ptr, &alpha)

	return alpha
}

// get_blend_mode for the texture
pub fn (texture Texture) get_blend_mode() BlendMode {
	mode := BlendMode.@none
	C.SDL_GetTextureBlendMode(texture.ptr, &mode)

	return mode
}

// get_color_mod gets the color value that is multiplied into render copy operations
pub fn (texture Texture) get_color_mod() Color {
	r := byte(0)
	g := byte(0)
	b := byte(0)

	C.SDL_GetTextureColorMod(texture.ptr, &r, &g, &b)

	return { r: r, g: g, b: b }
}

// get_height returns the height of the texture
pub fn (texture Texture) get_height() int {
	return texture.h
}

// get_width returns the width of the texture
pub fn (texture Texture) get_width() int {
	return texture.w
}

pub fn (texture Texture) query(format &u32, access, w, h &int) {
	C.SDL_QueryTexture(texture.ptr, format, access, w, h)
}


pub fn (texture Texture) render(renderer Renderer, rect Rect) int {
	return renderer.copy(texture, { x: 0, y: 0, w: texture.w, h: texture.h }, rect)
}

// set_alpha sets the alpha value of the texture
pub fn (texture Texture) set_alpha(alpha byte) int {
	return C.SDL_SetTextureAlphaMod(texture.ptr, alpha)
}

// set_blend_mode for the texture
pub fn (texture Texture) set_blend_mode(mode BlendMode) int {
	return C.SDL_SetTextureBlendMode(texture.ptr, mode)
}

// set_color_mod sets an additional color value multiplied into render copy operations
pub fn (texture Texture) set_color_mod(color Color) int {
	return C.SDL_SetTextureColorMod(texture.ptr, color.r, color.g, color.b)
}

pub fn (texture Texture) update(rect Rect, pixels voidptr, pitch int) {
	C.SDL_UpdateTexture(texture.ptr, &rect, pixels, pitch)
}