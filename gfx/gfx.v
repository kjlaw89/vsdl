module gfx

fn C.SDL_LoadBMP(charptr) voidptr

fn init() {
	C.SDL_InitSubSystem(C.SDL_INIT_VIDEO)
}

pub fn load_bmp(path string) ?&Surface {
	surface := C.SDL_LoadBMP(path.str)
	if surface == 0 {
		return error(serror("Unable to load bmp '$path'"))
	}
	return surface
}

fn serror(text string) string {
	msg := tos3(C.SDL_GetError())
	return '$text: $msg'
}
