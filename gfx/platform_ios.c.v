module gfx

// _ios.c.v is still being loaded in on Windows, so this won't compile

pub type IPhoneAnimationCallback = fn(voidptr)

fn C.SDL_iPhoneSetAnimationCallback(voidptr, int, iPhoneAnimationCallback, voidptr) int
fn C.SDL_iPhoneSetEventPump(bool)

pub fn iphone_animation_callback(window Window, interval int, callback IPhoneAnimationCallback, param voidptr) int {
	return 0
	//return C.SDL_iPhoneSetAnimationCallback(window.ptr, interval, callback, param)
}

pub fn iphone_set_event_pump(enabled bool) {
	// ignored
	//C.SDL_iPhoneSetEventPump(enabled)
}