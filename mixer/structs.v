module mixer

struct Chunk {
mut:
	allocated int
	abuf      byteptr
	alen      u32
	volume    byte
}

struct Music {
mut:
	ptr   voidptr
pub:
	@type MusicType
}
