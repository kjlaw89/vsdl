module gfx

fn C.SDL_GetDisplayMode(int, int, voidptr) int
fn C.SDL_GetNumVideoDisplays() int
fn C.SDL_GetNumDisplayModes(int) int

pub fn get_display(index int) ?Display {
	display := Display{}
	result := C.SDL_GetDisplayMode(index, 0, &display)

	if result < 0 {
		return error(serror("Unable to get display"))
	}

	return display
}

pub fn get_displays_count() int {
	return C.SDL_GetNumVideoDisplays()
}

pub fn get_display_modes(display int) int {
	return C.SDL_GetNumDisplayModes(display)
}