module gfx

pub type WindowsMessageCallback = fn(voidptr, voidptr, u32, u64, i64)
fn C.SDL_SetWindowsMessageHook(WindowsMessageCallback, voidptr)

pub fn set_windows_hook(callback WindowsMessageCallback, data voidptr) {
	C.SDL_SetWindowsMessageHook(callback, data)
}