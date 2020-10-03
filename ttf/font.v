module ttf

import vsdl.gfx

fn C.TTF_CloseFont(voidptr)
fn C.TTF_FontAscent(voidptr) int
fn C.TTF_FontDescent(voidptr) int
fn C.TTF_FontHeight(voidptr) int
fn C.TTF_FontFaceFamilyName(voidptr) charptr
fn C.TTF_FontFaces(voidptr) int
fn C.TTF_FontFaceIsFixedWidth(voidptr) int
fn C.TTF_FontFaceStyleName(voidptr) charptr
fn C.TTF_FontLineSkip(voidptr) int
fn C.TTF_GetFontHinting(voidptr) u32
fn C.TTF_GetFontKerning(voidptr) int
fn C.TTF_GetFontOutline(voidptr) int
fn C.TTF_GetFontStyle(voidptr) u32
fn C.TTF_GlyphMetrics(voidptr, u16, voidptr, voidptr, voidptr, voidptr, voidptr) int
fn C.TTF_OpenFont(charptr, int) voidptr
fn C.TTF_OpenFontIndex(charptr, int, int) voidptr
fn C.TTF_RenderUTF8_Solid(voidptr, charptr, voidptr) voidptr
fn C.TTF_RenderUTF8_Shaded(voidptr, charptr, voidptr, voidptr) voidptr
fn C.TTF_RenderUTF8_Blended(voidptr, charptr, voidptr) voidptr
fn C.TTF_SetFontHinting(voidptr, u32)
fn C.TTF_SetFontKerning(voidptr, u32)
fn C.TTF_SetFontOutline(voidptr, int)
fn C.TTF_SetFontStyle(voidptr, u32)
fn C.TTF_SizeUTF8(voidptr, charptr, voidptr, voidptr) int

pub fn (font Font) free() {
	C.TTF_CloseFont(font.ptr)
}

// get_ascent returns the maximum height from the top of the font to the baseline
pub fn (font Font) get_ascent() int {
	return C.TTF_FontAscent(font.ptr)
}

// get_descent returns the maximum height from the baseline to the bottom of the font
pub fn (font Font) get_descent() int {
	return C.TTF_FontDescent(font.ptr)
}

// get_faces returns the number of font faces in this font
pub fn (font Font) get_faces() int {
	return C.TTF_FontFaces(font.ptr)
}

// get_face_name returns the name of the current face
pub fn (font Font) get_face_name() string {
	return tos3(C.TTF_FontFaceFamilyName(font.ptr))
}

// get_face_style returns the name of the current face's style
pub fn (font Font) get_face_style() string {
	return tos3(C.TTF_FontFaceStyleName(font.ptr))
}

// get_height returns the max height of the entire font 
pub fn (font Font) get_height() int {
	return C.TTF_FontHeight(font.ptr)
}

// get_hinting returns the current outline size of the font
pub fn (font Font) get_hinting() FontHinting {
	return C.TTF_GetFontHinting(font.ptr)
}

// get_glyph_metrics return the metrics (minX, maxX, minY, maxY, advance) on the provided character
// If the character does not exist in the font, -1 is returned
pub fn (font Font) get_glyph_metrics(char u16) (int, int, int, int, int) {
	minx := 0
	maxx := 0
	miny := 0
	maxy := 0
	advance := 0

	if C.TTF_GlyphMetrics(font.ptr, char, &minx, &maxx, &miny, &maxy, &advance) == -1 {
		return -1, -1, -1, -1, -1
	}

	return minx, maxx, miny, maxy, advance
}

// get_kerning returns the current kerning setting of the font
pub fn (font Font) get_kerning() int {
	return C.TTF_GetFontKerning(font.ptr)
}

// get_line_skip returns the recommended pixel height of a rendered line of text for this font
pub fn (font Font) get_line_skip() int {
	return C.TTF_FontLineSkip(font.ptr)
}

// get_outline returns the current outline size of the font
pub fn (font Font) get_outline() int {
	return C.TTF_GetFontOutline(font.ptr)
}

// get_size calculates the total width and height of the provided `text`
pub fn (font Font) get_size(text string) (int, int) {
	w := 0
	h := 0

	C.TTF_SizeUTF8(font.ptr, text.str, &w, &h)
	return w, h
}

// get_style returns the style of the current font (bold, italic, etc)
pub fn (font Font) get_style() FontStyle {
	return C.TTF_GetFontStyle(font.ptr)
}

// is_fixed checks if the current face is a fixed-width
pub fn (font Font) is_fixed() bool {
	return C.TTF_FontFaceIsFixedWidth(font.ptr) > 0
}

// open_font opens the provided font `name` at `size`
pub fn open_font(name string, size int) ?Font {
	font := Font{ ptr: C.TTF_OpenFont(name.str, size) }

	if font.ptr == 0 {
		return error(serror("Unable to open font $name"))
	}

	return font
}

// open_font_index opens the provided font `name` at `size` at `index`
pub fn open_font_index(name string, size, index int) ?Font {
	font := Font{ ptr: C.TTF_OpenFontIndex(name.str, size, index) }

	if font.ptr == 0 {
		return error(serror("Unable to open font $name"))
	}

	return font
}

// render_solid renders `text` in a lower quality to a `Surface`
pub fn (font Font) render_solid(text string, color gfx.Color) ?&gfx.Surface {
	surface := C.TTF_RenderUTF8_Solid(font.ptr, text.str, color)

	if surface == 0 {
		return error(serror("Unable to render '$text' to surface"))
	}

	return surface
}

// render_shaded renders `text` in a good quality to a `Surface` with a background
pub fn (font Font) render_shaded(text string, fg gfx.Color, bg gfx.Color) ?&gfx.Surface {
	surface := C.TTF_RenderUTF8_Shaded(font.ptr, text.str, fg, bg)

	if surface == 0 {
		return error(serror("Unable to render '$text' to surface"))
	}

	return surface
}

// render_blended renders `text` in a good quality with alpha to a `Surface`
pub fn (font Font) render_blended(text string, color gfx.Color) ?&gfx.Surface {
	surface := C.TTF_RenderUTF8_Blended(font.ptr, text.str, color)

	if surface == 0 {
		return error(serror("Unable to render '$text' to surface"))
	}

	return surface
}

// set_style sets the style for this font
pub fn (font Font) set_style(style FontStyle) {
	C.TTF_SetFontStyle(font.ptr, style)
}

// set_outline sets the outline for this font
pub fn (font Font) set_outline(outline int) {
	C.TTF_SetFontOutline(font.ptr, outline)
}

// set_hinting sets the hinting for this font
pub fn (font Font) set_hinting(hinting FontHinting) {
	C.TTF_SetFontHinting(font.ptr, hinting)
}

// set_kerning sets the kerning for this font
pub fn (font Font) set_kerning(kerning int) {
	C.TTF_SetFontKerning(font.ptr, kerning)
}