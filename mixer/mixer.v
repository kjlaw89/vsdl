module mixer

import vsdl.audio

#flag -I @VROOT/headers
#flag -L .
#flag linux -lflac
#flag linux -lmodplug
#flag linux -lmpg123
#flag linux -logg
#flag linux -lopus
#flag linux -lopusfile
#flag linux -lvorbis
#flag linux -lvorbisfile
#flag windows -llibFLAC-8
#flag windows -llibmodplug-1
#flag windows -llibmpg123-0
#flag windows -llibogg-0
#flag windows -llibopus-0
#flag windows -llibopusfile-0
#flag windows -llibvorbis-0
#flag windows -llibvorbisfile-3
#flag -lSDL2_mixer
#flag -lSDL2
#include "mixer/SDL_mixer.h"

fn C.Mix_Init(int) int

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