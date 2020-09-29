module audio

pub enum AudioChangeFlags {
	frequency   =   0x0001
	format      =   0x0002
	channels    =   0x0004
	samples     =   0x0008
	any         =   0x000F
}

pub enum AudioFormat {
	unknown  = 0x0000
	u8       = 0x0008
	s8       = 0x8008
	u16lsb   = 0x0010
	s16lsb   = 0x8010
	u16msb   = 0x1010
	s16msb   = 0x9010
	s32lsb   = 0x8020
	s32msb   = 0x9020
	f32lsb   = 0x8120
	f32msb   = 0x9120
}

pub enum AudioStatus {
	stopped
	playing
	paused
}