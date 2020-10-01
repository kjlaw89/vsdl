module gfx

fn C.SDL_DXGIGetOutputInfo(int, voidptr, voidptr) bool

pub fn dxgi_get_output(display int) (int, int) {
	adapter := 0
	output := 0

	C.SDL_DXGIGetOutputInfo(display, &adapter, &output)
	return adapter, output
}