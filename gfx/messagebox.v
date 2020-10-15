module gfx

fn C.SDL_ShowMessageBox(voidptr, voidptr) int

fn C.SDL_ShowSimpleMessageBox(int, voidptr, voidptr, voidptr) int

pub fn (window Window) show_message(title string, message string, flag MessageBoxFlags) {
	show_message(title, message, flag, window)
}

pub fn (window Window) show_message_custom(title string, message string, flag MessageBoxFlags, buttons []MessageBoxButton, scheme MessageBoxColorScheme) int {
	return show_message_custom(title, message, flag, buttons, scheme, window)
}

pub fn show_message(title string, message string, flag MessageBoxFlags, window ...Window) ? {
	mut result := 0
	if window.len > 0 {
		result = C.SDL_ShowSimpleMessageBox(flag, title.str, message.str, window[0].ptr)
	} else {
		result = C.SDL_ShowSimpleMessageBox(flag, title.str, message.str, C.NULL)
	}
	if result < 0 {
		return error(serror('Unable to show message box'))
	}
}

pub fn show_message_custom(title string, message string, flag MessageBoxFlags, buttons []MessageBoxButton, scheme &MessageBoxColorScheme, window ...Window) int {
	// println(buttons)
	messagebox_data := MessageBox{
		flags: flag
		window: if window.len > 0 { window[0].ptr } else { u32(0) }
		title: title.str
		message: message.str
		numbuttons: buttons.len
		buttons: buttons.data
		color_scheme: scheme
	}
	result := 0
	C.SDL_ShowMessageBox(&messagebox_data, &result)
	return result
}
