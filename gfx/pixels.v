module gfx

fn C.SDL_AllocFormat(u32) voidptr

fn C.SDL_AllocPalette(int) voidptr

fn C.SDL_CalculateGammaRamp(f32, voidptr)

fn C.SDL_FreeFormat(voidptr)

fn C.SDL_FreePalette(voidptr)

fn C.SDL_GetRGB(u32, voidptr, voidptr, voidptr, voidptr)

fn C.SDL_GetRGBA(u32, voidptr, voidptr, voidptr, voidptr, voidptr)

fn C.SDL_MapRGB(voidptr, byte, byte, byte) u32

fn C.SDL_MapRGBA(voidptr, byte, byte, byte, byte) u32

fn C.SDL_MasksToPixelFormatEnum(int, u32, u32, u32, u32) u32

fn C.SDL_PixelFormatEnumToMasks(u32, voidptr, voidptr, voidptr, voidptr, voidptr) bool

fn C.SDL_SetPaletteColors(voidptr, voidptr, int, int) int

fn C.SDL_SetPixelFormatPalette(voidptr, voidptr) int

pub fn calculate_gamma_ramp(gamma f32) u16 {
	ramp := u16(0)
	C.SDL_CalculateGammaRamp(gamma, &ramp)
	return ramp
}

pub fn (format &PixelFormat) free() {
	C.SDL_FreeFormat(format)
}

pub fn (palette &Palette) free() {
	C.SDL_FreePalette(palette)
}

pub fn (format &PixelFormat) get_rgb(pixel u32) (byte, byte, byte) {
	r := byte(0)
	g := byte(0)
	b := byte(0)
	C.SDL_GetRGB(pixel, format, &r, &g, &b)
	return r, g, b
}

pub fn (format &PixelFormat) get_rgba(pixel u32) (byte, byte, byte, byte) {
	r := byte(0)
	g := byte(0)
	b := byte(0)
	a := byte(0)
	C.SDL_GetRGBA(pixel, format, &r, &g, &b, &a)
	return r, g, b, a
}

pub fn (format &PixelFormat) map_rgb(r byte, g byte, b byte) u32 {
	return C.SDL_MapRGB(format, r, g, b)
}

pub fn (format &PixelFormat) map_rgba(r byte, g byte, b byte, a byte) u32 {
	return C.SDL_MapRGBA(format, r, g, b, a)
}

pub fn masks_to_pixel_formats(bpp int, rmask u32, gmask u32, bmask u32, amask u32) PixelFormats {
	return PixelFormats(C.SDL_MasksToPixelFormatEnum(bpp, rmask, gmask, bmask, amask))
}

pub fn new_pixel_format(format u32) &PixelFormat {
	return C.SDL_AllocFormat(format)
}

pub fn new_palette(num_colors int) &Palette {
	return C.SDL_AllocPalette(num_colors)
}

pub fn pixel_formats_to_masks(format PixelFormats) (bool, int, u32, u32, u32, u32) {
	bpp := int(0)
	rmask := u32(0)
	gmask := u32(0)
	bmask := u32(0)
	amask := u32(0)
	result := C.SDL_PixelFormatEnumToMasks(format, &bpp, &rmask, &gmask, &bmask, &amask)
	return result, bpp, rmask, gmask, bmask, amask
}

pub fn (palette &Palette) set_colors(colors []Color, first int, total int) int {
	return C.SDL_SetPaletteColors(palette, colors.data, first, total)
}

pub fn (format &PixelFormat) set_palette(palette &Palette) int {
	return C.SDL_SetPixelFormatPalette(format, palette)
}
