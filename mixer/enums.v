module mixer

pub enum MixerFlags {
	flac    = 0x0001
	mod     = 0x0002
	mp3     = 0x0008
	ogg     = 0x0010
	mid     = 0x0020
	opus    = 0x0040
}