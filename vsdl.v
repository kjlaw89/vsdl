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

fn C.SDL_GetVersion(voidptr)

fn init() {
	C.SDL_Init(0)
}

// delay waits the specified amount of milliseconds before returning
pub fn delay(ms u32) {
	C.SDL_Delay(ms)
}

// get_ticks returns the number of milliseconds since VSDL was initialized
pub fn get_ticks() u32 {
	return C.SDL_GetTicks()
}

// quit shuts down all SDL subsystems
pub fn quit() {
	C.SDL_Quit()
}

// version returns the SDL library version
pub fn version() Version {
	mut version := Version{}
	C.SDL_GetVersion(&version)

	return version
}

fn serror(text string) string {
	msg := tos3(C.SDL_GetError())
	return '$text: $msg'
}
