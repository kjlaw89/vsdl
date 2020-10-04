module mixer

pub type EffectCallback = fn(int, voidptr, int, voidptr)
pub type EffectDoneCallback = fn(int, voidptr)

struct Chunk {
mut:
	allocated     int
	abuf          byteptr
	alen          u32
	volume        byte
}

struct Music {
mut:
	ptr          voidptr
}