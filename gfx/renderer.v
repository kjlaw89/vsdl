module gfx

fn C.SDL_CreateTexture(voidptr, u32, int, int, int) voidptr

fn C.SDL_DestroyRenderer(voidptr)

fn C.SDL_GetRendererOutputSize(voidptr, voidptr, voidptr) int

fn C.SDL_GetRenderDrawColor(voidptr, voidptr, voidptr, voidptr, voidptr) int

fn C.SDL_GetRenderTarget(voidptr) voidptr

fn C.SDL_RenderGetScale(voidptr, voidptr, voidptr)

fn C.SDL_RenderGetViewport(voidptr, voidptr)

fn C.SDL_RenderDrawLine(voidptr, int, int, int, int) int

fn C.SDL_RenderDrawLines(voidptr, voidptr, int) int

fn C.SDL_RenderDrawPoint(voidptr, int, int) int

fn C.SDL_RenderDrawPoints(voidptr, voidptr, int) int

fn C.SDL_RenderDrawRect(voidptr, voidptr) int

fn C.SDL_RenderDrawRects(voidptr, voidptr, int) int

fn C.SDL_RenderFillRect(voidptr, voidptr) int

fn C.SDL_RenderFillRects(voidptr, voidptr, int) int

fn C.SDL_RenderClear(voidptr)

fn C.SDL_RenderCopy(voidptr, voidptr, voidptr, voidptr) int

fn C.SDL_RenderCopyEx(voidptr, voidptr, voidptr, voidptr, f64, voidptr, u32) int

fn C.SDL_RenderPresent(voidptr)

fn C.SDL_RenderSetScale(voidptr, f32, f32) int

fn C.SDL_RenderSetViewport(voidptr, voidptr) int

fn C.SDL_SetRenderDrawColor(voidptr, byte, byte, byte, byte)

fn C.SDL_SetRenderDrawBlendMode(voidptr, int)

fn C.SDL_SetRenderTarget(voidptr, voidptr) int

// clear the renderer
pub fn (renderer Renderer) clear() {
	C.SDL_RenderClear(renderer.ptr)
}

// copy a src_`Rect` from the provided texture to a dst_`Rect` for the rendering target
pub fn (renderer Renderer) copy(texture Texture, src_rect Rect, dst_rect Rect) int {
	return C.SDL_RenderCopy(renderer.ptr, texture.ptr, &src_rect, &dst_rect)
}

// copy_ex copies a src_`Rect` from the provided texture to a dst_`Rect`
// for the rendering target, optionally rotating it by `angle` around the
// the given center `Point` and optionally flipping it top-bottom or left-right
pub fn (renderer Renderer) copy_ex(texture Texture, src_rect Rect, dst_rect Rect, angle f64, center Point, flip RendererFlip) int {
	return C.SDL_RenderCopyEx(renderer.ptr, texture.ptr, &src_rect, &dst_rect, angle,
		&center, flip)
}

// create_texture creates a new texture from the renderer
pub fn (renderer Renderer) create_texture(format PixelFormats, access TextureAccess, width int, height int) ?Texture {
	texture := Texture{
		h: height
		ptr: C.SDL_CreateTexture(renderer.ptr, format, access, width, height)
		w: width
	}
	if texture.ptr == 0 {
		return error(serror('Unable to create new texture'))
	}
	return texture
}

// destroy the renderer
pub fn (mut renderer Renderer) destroy() {
	if renderer.ptr == 0 {
		return
	}
	C.SDL_DestroyRenderer(&renderer)
	renderer.ptr = 0
}

// draw_line from `point1` to `point2`
pub fn (renderer Renderer) draw_line(point1 Point, point2 Point) int {
	return C.SDL_RenderDrawLine(renderer.ptr, point1.x, point1.y, point2.x, point2.y)
}

// draw_lines between each of the provided `points`
pub fn (renderer Renderer) draw_lines(points []Point) int {
	return C.SDL_RenderDrawLines(renderer.ptr, points.data, points.len)
}

// draw_point draws a single `point`
pub fn (renderer Renderer) draw_point(point Point) int {
	return C.SDL_RenderDrawPoint(renderer.ptr, point.x, point.y)
}

// draw_point draws the provided `points`
pub fn (renderer Renderer) draw_points(points []Point) int {
	return C.SDL_RenderDrawPoints(renderer.ptr, points.data, points.len)
}

// draw_rect draws an open rectangle with the provided x, y, width and height values
pub fn (renderer Renderer) draw_rect(rect Rect) int {
	return C.SDL_RenderDrawRect(renderer.ptr, &rect)
}

// draw_rects draws open rectangles for the provided `rects`
pub fn (renderer Renderer) draw_rects(rects []Rect) int {
	return C.SDL_RenderDrawRects(renderer.ptr, rects.data, rects.len)
}

// fill_rect draws a filled in rectangle with the provided x, y, width and height values
pub fn (renderer Renderer) draw_fill_rect(rect Rect) int {
	return C.SDL_RenderFillRect(renderer.ptr, &rect)
}

// fill_rect draws filled in rectangles for the provided `rects`
pub fn (renderer Renderer) draw_fill_rects(rects []Rect) int {
	return C.SDL_RenderFillRects(renderer.ptr, rects.data, rects.len)
}

// fill fills in this renderer with the provided color
// without affecting the existing draw color
pub fn (renderer Renderer) fill(color Color) {
	existing_color := renderer.get_draw_color()
	renderer.set_draw_color(color)
	renderer.clear()
	renderer.set_draw_color(existing_color)
}

// fill_viewport fills in the current renderer viewport with
// the provided color without affecting the existing draw color
pub fn (renderer Renderer) fill_viewport(color Color) {
	existing_color := renderer.get_draw_color()
	renderer.set_draw_color(color)
	renderer.draw_fill_rect(renderer.get_viewport())
	renderer.set_draw_color(existing_color)
}

// get_draw_color returns back the currently set draw color
pub fn (renderer Renderer) get_draw_color() Color {
	r := byte(0)
	b := byte(0)
	g := byte(0)
	a := byte(0)
	C.SDL_GetRenderDrawColor(renderer.ptr, &r, &b, &g, &a)
	return {
		r: r
		b: b
		g: g
		a: a
	}
}

// get_render_target gets the current render target if set
// or returns an error if the defualt is set
pub fn (renderer Renderer) get_render_target() ?Texture {
	ptr := C.SDL_GetRenderTarget(renderer.ptr)
	if ptr == 0 {
		return error('Default render target')
	}
	access := 0
	format := u32(0)
	height := 0
	width := 0
	C.SDL_QueryTexture(ptr, &access, &format, &height, &width)
	return Texture{
		h: height
		ptr: ptr
		w: width
	}
}

pub fn (renderer Renderer) get_scale() (f32, f32) {
	scale_x := f32(0)
	scale_y := f32(0)
	C.SDL_RenderGetScale(renderer.ptr, &scale_x, &scale_y)
	return scale_x, scale_y
}

pub fn (renderer Renderer) get_size() (int, int) {
	w := 0
	h := 0
	C.SDL_GetRendererOutputSize(renderer.ptr, &w, &h)
	return w, h
}

// get_viewport gets the a rect for the current viewport
pub fn (renderer Renderer) get_viewport() Rect {
	rect := Rect{}
	C.SDL_RenderGetViewport(renderer.ptr, &rect)
	return rect
}

// present updates the screen with any rendering performed since the previous call
pub fn (renderer Renderer) present() {
	C.SDL_RenderPresent(renderer.ptr)
}

// render renders a texture in its entirety to the specified
// size and position on this renderer
pub fn (renderer Renderer) render(texture Texture, rect Rect) int {
	return renderer.copy(texture, {
		x: 0
		y: 0
		w: texture.w
		h: texture.h
	}, rect)
}

pub fn (renderer Renderer) set_blend_mode(mode BlendMode) {
	C.SDL_SetRenderDrawBlendMode(renderer.ptr, mode)
}

pub fn (renderer Renderer) set_draw_color(color Color) {
	C.SDL_SetRenderDrawColor(renderer.ptr, color.r, color.g, color.b, color.a)
}

pub fn (renderer Renderer) set_target(texture Texture) {
	C.SDL_SetRenderTarget(renderer.ptr, texture.ptr)
}

pub fn (renderer Renderer) set_scale(scale_x f32, scale_y f32) {
	C.SDL_RenderSetScale(renderer.ptr, scale_x, scale_y)
}

pub fn (renderer Renderer) set_viewport(rect Rect) {
	if !rect.has_area() {
		C.SDL_RenderSetViewport(renderer.ptr, 0)
		return
	}
	C.SDL_RenderSetViewport(renderer.ptr, &rect)
}
