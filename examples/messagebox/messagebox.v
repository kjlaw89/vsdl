module main

import vsdl
import vsdl.gfx

fn main() {
	gfx.show_message("VSDL Messagebox", "This is a simple message box provided by SDL2!", .information)

	result := gfx.show_message_custom(
		"VSDL Custom Messagebox",
		"This is a custom message box with multiple options. Pretty cool isn't it?",
		.warning,
		[
			gfx.MessageBoxButton{ flag: .return_key, id: 0, text: "Yes".str },
			gfx.MessageBoxButton{ flag: .@none, id: 1, text: "No".str },
			gfx.MessageBoxButton{ flag: .escape_key, id: 2, text: "Cancel".str }
		],
		voidptr(0)
	)

	match(result) {
		0 { gfx.show_message ("Yes", "Sweet", .information) }
		1 { gfx.show_message ("No", ":(", .error) }
		else {}
	}

	vsdl.quit()
}