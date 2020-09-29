module image

import vsdl.gfx

#flag -I @VROOT/headers
#flag -L .
#flag -llibjpeg-9
#flag -llibpng16-16
#flag -llibtiff-5
#flag -llibwebp-7
#flag -lzlib1
#flag -lSDL2_image
#include "image/SDL_Image.h"

fn C.IMG_Init(int)
fn C.IMG_Quit()
fn C.IMG_Load(charptr) voidptr

pub fn init(flags int) {
	C.IMG_Init(flags)
}

pub fn load(path string) ?&gfx.Surface {
	surface := C.IMG_Load(path.str)

	if surface == 0 {
		return error(serror("Unable to load image '$path'"))
	}

	return surface
}

pub fn serror(text string) string {
	msg := tos3(C.SDL_GetError())
	return "$text: $msg"
}

pub fn quit() {
	C.IMG_Quit()
}