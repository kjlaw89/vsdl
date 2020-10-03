module gfx

fn C.SDL_CreateWindow(string, u32, u32, u32, u32, bool) voidptr
fn C.SDL_CreateRenderer(voidptr, int, u32) voidptr
fn C.SDL_DestroyWindow(voidptr)
fn C.SDL_GetGrabbedWindow() voidptr
fn C.SDL_GetWindowBordersSize(voidptr, voidptr, voidptr, voidptr, voidptr) int
fn C.SDL_GetWindowBrightness(voidptr) f32
fn C.SDL_GetWindowData(voidptr, charptr) voidptr
fn C.SDL_GetWindowDisplayIndex(voidptr) int
fn C.SDL_GetWindowDisplayMode(voidptr, voidptr) int
fn C.SDL_GetWindowFullscreen(voidptr, voidptr) u32
fn C.SDL_GetWindowFlags(voidptr) u32
fn C.SDL_GetWindowFromID(int) voidptr
//fn C.SDL_GetWindowGammaRamp(voidptr, voidptr, voidptr, voidptr)
fn C.SDL_GetWindowGrab(voidptr) bool
fn C.SDL_GetWindowID(voidptr) u32
fn C.SDL_GetWindowMaximumSize(voidptr, voidptr, voidptr)
fn C.SDL_GetWindowMinimumSize(voidptr, voidptr, voidptr)
fn C.SDL_GetWindowOpacity(voidptr, voidptr) float
fn C.SDL_GetWindowPixelFormat(voidptr) u32
fn C.SDL_GetWindowPosition(voidptr, voidptr, voidptr)
fn C.SDL_GetWindowSize(voidptr, voidptr, voidptr)
fn C.SDL_GetWindowSurface(voidptr) voidptr
fn C.SDL_GetWindowTitle(voidptr) charptr
fn C.SDL_GetWindowWMInfo(voidptr)
fn C.SDL_MaximizeWindow(voidptr)
fn C.SDL_MinimizeWindow(voidptr)
fn C.SDL_RaiseWindow(voidptr)
fn C.SDL_RestoreWindow(voidptr)
fn C.SDL_SetWindowBordered(voidptr, bool)
fn C.SDL_SetWindowBrightness(voidptr, f32) int
fn C.SDL_SetWindowData(voidptr, charptr, voidptr) voidptr
fn C.SDL_SetWindowDisplayMode(voidptr, voidptr) int
fn C.SDL_SetWindowFullscreen(voidptr, u32) int
//fn C.SDL_SetWindowGammaRamp(voidptr)
fn C.SDL_SetWindowGrab(voidptr, bool)
//fn C.SDL_SetWindowHitTest(voidptr)
fn C.SDL_SetWindowIcon(voidptr, voidptr)
fn C.SDL_SetWindowInputFocus(voidptr)
fn C.SDL_SetWindowMaximumSize(voidptr, int, int)
fn C.SDL_SetWindowMinimumSize(voidptr, int, int)
fn C.SDL_SetWindowModalFor(voidptr, voidptr) int
fn C.SDL_SetWindowOpacity(voidptr, f32) int
fn C.SDL_SetWindowPosition(voidptr, int, int)
fn C.SDL_SetWindowResizable(voidptr bool)
fn C.SDL_SetWindowSize(voidptr, int, int)
fn C.SDL_SetWindowTitle(voidptr, charptr)
fn C.SDL_UpdateWindowSurface(voidptr)

pub fn (window Window) create_renderer(index int, flags u32) ?Renderer {
	renderer := Renderer{ ptr: C.SDL_CreateRenderer(window.ptr, index, flags) }

	if renderer.ptr == 0 {
		return error(serror("Unable to create new renderer"))
	}

	return renderer
}

// create_window creates a new window with the provided `title`, position and size
// and flags. It is possible to provide multiple flags when initializing a window.
//
// Example:
// ```
// 	vsdl.create_window("Test Window", -1, -1, 640, 480, .shown, .fullscreen_desktop)
// ```
pub fn create_window(title string, x, y, width, height int, flags ...WindowFlags) ?Window {
	x_adj := if x == -1 { C.SDL_WINDOWPOS_CENTERED } else { x }
	y_adj := if y == -1 { C.SDL_WINDOWPOS_CENTERED } else { y }

	// Sum the flags
	mut flag := u32(0)
	for f in flags {
		flag = flag | f
	}

	window := Window{ ptr: C.SDL_CreateWindow(title.str, x_adj, y_adj, width, height, flag) }

	if window.ptr == 0 {
		return error(serror("Unable to create new window"))
	}

	return window
}

pub fn create_window_and_renderer(title string, x, y, width, height int, flags ...WindowFlags) ?(Window, Renderer) {
	window := create_window(title, x, y, width, height, flags)?
	renderer := window.create_renderer(-1, 0)?

	return window, renderer
}

pub fn (mut window Window) destroy() {
	if window.ptr == 0 {
		return
	}

	C.SDL_DestroyWindow(window.ptr)
	window.ptr = 0
}

// focus sets the window to the actively focused window
pub fn (window Window) focus() {
	C.SDL_RaiseWindow(window.ptr)
}

pub fn get_active_window() ?Window {
	window := Window{ ptr: C.SDL_GetGrabbedWindow() }

	if window.ptr == 0 {
		return error(serror("No window is currently active"))
	}

	return window
}

pub fn (window Window) get_border_size() (int, int, int, int) {
	top := 0
	left := 0
	bottom := 0
	right := 0
	
	C.SDL_GetWindowBordersSize(window.ptr, &top, &left, &bottom, &right)

	return top, left, bottom, right
}

pub fn (window Window) get_brightness() f32 {
	return C.SDL_GetWindowBrightness(window.ptr)
}

pub fn (window Window) get_data(name string) voidptr {
	return C.SDL_GetWindowData(window.ptr, name.str)
}

pub fn (window Window) get_display() ?Display {
	display := Display{}
	result := C.SDL_GetWindowDisplayMode(window.ptr, &display)

	if result < 0 {
		return error(serror("Unable to get display"))
	}

	return display
}

pub fn (window Window) get_id() u32 {
	return C.SDL_GetWindowID(window.ptr)
}

pub fn (window Window) get_index() int {
	return C.SDL_GetWindowDisplayIndex(window.ptr)
}

pub fn (window Window) get_flags() u32 {
	return C.SDL_GetWindowFlags(window.ptr)
}

pub fn (window Window) get_maximum_size() (int, int) {
	width := 0
	height := 0

	C.SDL_GetWindowMaximumSize(window.ptr, &width, &height)

	return width, height
}

pub fn (window Window) get_minimum_size() (int, int) {
	width := 0
	height := 0

	C.SDL_GetWindowMinimumSize(window.ptr, &width, &height)

	return width, height
}

pub fn (window Window) get_opacity() f32 {
	opacity := f32(0)

	C.SDL_GetWindowOpacity(window.ptr, &opacity)

	return opacity
}

pub fn (window Window) get_pixel_format() PixelFormats {
	return C.SDL_GetWindowPixelFormat(window.ptr)
}

pub fn (window Window) get_position() Point {
	x := 0
	y := 0

	C.SDL_GetWindowPosition(window.ptr, &x, &y)

	return { x: x, y: y }
}

pub fn (window Window) get_size() (int, int) {
	w := 0
	h := 0

	C.SDL_GetWindowPosition(window.ptr, &w, &h)

	return w, h
}

pub fn (window Window) get_surface() ?&Surface {
	surface := C.SDL_GetWindowSurface(window.ptr)

	if surface == 0 {
		return error(serror("Unable to get window surface"))
	}

	return surface
}

pub fn (window Window) get_title() string {
	return tos3(C.SDL_GetWindowTitle(window.ptr))
}

pub fn get_window_from_id(id u32) ?Window {
	window := Window{ ptr: C.SDL_GetWindowFromID(id) }

	if window.ptr == 0 {
		return error(serror("No window exists with that id"))
	}

	return window
}

pub fn (window Window) has_focus() bool {
	return C.SDL_GetWindowGrab(window.ptr)
}

pub fn (window Window) maximize() {
	C.SDL_MaximizeWindow(window.ptr)
}

pub fn (window Window) minimize() {
	C.SDL_MinimizeWindow(window.ptr)
}

pub fn (window Window) restore() {
	C.SDL_RestoreWindow(window.ptr)
}

pub fn (window Window) set_display(display Display) int {
	return C.SDL_SetWindowDisplayMode(window.ptr, &display)
}

pub fn (window Window) set_border(bordered bool) {
	C.SDL_SetWindowBordered(window.ptr, bordered)
}

pub fn (window Window) set_brightness(brightness f32) int {
	return C.SDL_SetWindowBrightness(window.ptr, brightness)
}

pub fn (window Window) set_data(name string, data voidptr) voidptr {
	return C.SDL_SetWindowData(window.ptr, name.str, data)
}

// set_focus can grab or release the input focus
pub fn (window Window) set_focus(focus bool) {
	C.SDL_SetWindowGrab(window.ptr, focus)
}

pub fn (window Window) set_fullscreen(fullscreen FullscreenMode) int {
	return C.SDL_SetWindowFullscreen(window.ptr, fullscreen)
}

pub fn (window Window) set_icon(icon &Surface) {
	C.SDL_SetWindowIcon(window.ptr, icon)
}

pub fn (window Window) set_maximum_size(w, h int) {
	C.SDL_SetWindowMaximumSize(window.ptr, w, h)
}

pub fn (window Window) set_minimum_size(w, h int) {
	C.SDL_SetWindowMinimumSize(window.ptr, w, h)
}

pub fn (window Window) set_modal_for(parent Window) {
	C.SDL_SetWindowModalFor(window.ptr, parent.ptr)
}

pub fn (window Window) set_opacity(opacity f32) int {
	return C.SDL_SetWindowOpacity(window.ptr, opacity)
}

pub fn (window Window) set_position(position Point) {
	x := if position.x == -1 { C.SDL_WINDOWPOS_CENTERED } else { position.x }
	y := if position.y == -1 { C.SDL_WINDOWPOS_CENTERED } else { position.y }

	C.SDL_SetWindowPosition(window.ptr, x, y)
}

pub fn (window Window) set_resizable(resizable bool) {
	C.SDL_SetWindowResizable(window.ptr, resizable)
}

pub fn (window Window) update() {
	C.SDL_UpdateWindowSurface(window.ptr)
}

