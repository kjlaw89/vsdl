module gfx

pub type WindowsMessageCallback = fn (voidptr, voidptr, u32, u64, i64)

fn C.SDL_DXGIGetOutputInfo(int, voidptr, voidptr) bool

fn C.SDL_SetWindowsMessageHook(WindowsMessageCallback, voidptr)

pub fn dxgi_get_output(display int) (int, int) {
	adapter := 0
	output := 0
	C.SDL_DXGIGetOutputInfo(display, &adapter, &output)
	return adapter, output
}

pub fn set_windows_hook(callback WindowsMessageCallback, data voidptr) {
	C.SDL_SetWindowsMessageHook(callback, data)
}
