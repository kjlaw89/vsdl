module mixer

import vsdl.audio

#flag -I @VROOT/headers
#flag -L .
#flag -lSDL2_mixer
#flag -lSDL2
#include "mixer/SDL_mixer.h"
fn C.Mix_CloseAudio()

fn C.Mix_GetError() charptr

fn C.Mix_Init(int) int

fn C.Mix_OpenAudio(int, u16, int, int) int

fn C.Mix_OpenAudioDevice(int, u16, int, int, charptr, int) int

fn C.Mix_Quit()

// init initializes the img library with the provided flags
// Note: This can be used to preload libraries. If not called
// it will automatically be called once when needed for a filetype
pub fn init(flags ...MixerFlags) int {
	// Sum the flags
	mut flag := 0
	for f in flags {
		flag = flag | f
	}
	return C.Mix_Init(flag)
}

// close closes mixer audio
pub fn close() {
	C.Mix_CloseAudio()
}

// quit shuts down all mixer libraries
pub fn quit() {
	for C.Mix_Init(0) > 0 {
		C.Mix_Quit()
	}
}

// open opens the default audio device for playing audio
pub fn open(frequency int, format Format, channels int, buffer_size int) ?int {
	mut adjusted_format := format
	if format == .default {
		$if little_endian {
			adjusted_format = Format.u16lsb
		} $else {
			adjusted_format = Format.u16msb
		}
	}
	result := C.Mix_OpenAudio(frequency, adjusted_format, channels, buffer_size)
	if result == -1 {
		return error(serror('Unable to open audio'))
	}
	return result
}

// open_device opens the specified audio device for playing audio
// Devices can be obtained via `audio.get_devices()`
pub fn open_device(device audio.AudioDevice, frequency int, format Format, channels int, buffer_size int, allowed_changes int) ?int {
	mut adjusted_format := format
	if format == .default {
		$if little_endian {
			adjusted_format = Format.u16lsb
		} $else {
			adjusted_format = Format.u16msb
		}
	}
	result := C.Mix_OpenAudioDevice(frequency, adjusted_format, channels, buffer_size,
		device.name.str, allowed_changes)
	if result == -1 {
		return error(serror('Unable to open audio'))
	}
	return result
}

fn serror(text string) string {
	msg := tos3(C.Mix_GetError())
	return '$text: $msg'
}
