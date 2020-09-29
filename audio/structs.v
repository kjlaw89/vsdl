module audio

type AudioCallback = fn(voidptr, &byte, int)

pub struct AudioData {
mut:
    copy      bool
	device    &AudioDevice = 0
	len       u32
	loop      bool
	path      string
	pos       u32
	ptr       &byte        = 0
	spec      AudioSpec
	status    AudioStatus  = .stopped
	volume    i8           = 128
}

pub struct AudioDevice {
mut:
	index     int
	name      string
	ptr       voidptr
	spec      AudioSpec
	queue     map[string]&AudioData
}

pub struct AudioSpec {
pub:
	freq      int
	format    AudioFormat
	channels  byte
	silence   byte
	samples   u16
	size      u32
mut:
	callback  voidptr
	userdata  voidptr
}