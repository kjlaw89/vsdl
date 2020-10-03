module system

fn C.SDL_GetClipboardText() charptr
fn C.SDL_HasClipboardText() bool
fn C.SDL_SetClipboardText(charptr) int

pub fn clipboard_get_text() string {
	return tos3(C.SDL_GetClipboardText())
}

pub fn clipboard_has_text() bool {
	return C.SDL_HasClipboardText()
}

pub fn clipboard_set_text(text string) int {
	return C.SDL_SetClipboardText(text.str)
}