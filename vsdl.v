module vsdl

#flag -I @VROOT/headers
#flag -L .
#flag -lSDL2
#include "SDL.h"
#include "SDL_vulkan.h"

fn C.SDL_Init(u32)
fn C.SDL_InitSubSystem(u32)
fn C.SDL_Delay(u32)
fn C.SDL_GetError() charptr
fn C.SDL_GetTicks() u32
fn C.SDL_Quit()

fn init() {
	C.SDL_Init(0)
}

pub fn delay(ms u32) {
	C.SDL_Delay(ms)
}

pub fn get_ticks() u32 {
	return C.SDL_GetTicks()
}

pub fn quit() {
	C.SDL_Quit()
}