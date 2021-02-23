module ttf

#flag -I @VROOT/headers
#flag -L .
#flag -lSDL2_ttf
#flag -lSDL2
#include "ttf/SDL_ttf.h"

fn C.TTF_Init()

fn C.TTF_Quit()

fn C.TTF_GetError() charptr

fn init() {
	C.TTF_Init()
}

pub fn quit() {
	C.TTF_Quit()
}

fn serror(text string) string {
	msg := unsafe { tos3(C.TTF_GetError()) }
	return '$text: $msg'
}
