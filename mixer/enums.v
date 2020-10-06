module mixer

pub enum MixerFlags {
	flac    = 0x0001
	mod     = 0x0002
	mp3     = 0x0008
	ogg     = 0x0010
	mid     = 0x0020
	opus    = 0x0040
}

pub enum Format {
	default = 0x0000
	u8      = 0x0008
	s8      = 0x8008
	u16lsb  = 0x0010
	s16lsb  = 0x8010
	u16msb  = 0x1010
	s16msb  = 0x9010
	s32lsb  = 0x8020
	s32msb  = 0x9020
	f32lsb  = 0x8120
	f32msb  = 0x9120
}

pub enum MusicType {
	@none
	cmd
	wav
	mod
	mid
	ogg
	mp3
	mp3_mad_unused
	flac
	modplug_unused
	opus
}

pub enum Fading {
	no_fading
	fade_out
	fade_in
}