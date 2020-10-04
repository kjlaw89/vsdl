module mixer

import vsdl

fn C.Mix_FreeChunk(voidptr)
fn C.Mix_GetNumChunkDecoders() int
fn C.Mix_GetChunkDecoder(int) charptr
fn C.Mix_LoadWAV(charptr) voidptr
fn C.Mix_LoadWAV_RW(voidptr, bool) voidptr
fn C.Mix_VolumeChunk(voidptr, byte) int

pub fn (chunk &Chunk) free() {
	C.Mix_FreeChunk(chunk)
}

pub fn (chunk &Chunk) fade_in(channel, loop, ms int) int {
	return channel_fade_in(channel, chunk, loop, ms)
}

pub fn (chunk &Chunk) fade_in_timed(channel, loop, ms, time int) int {
	return channel_fade_in_timed(channel, chunk, loop, ms, time)
}

pub fn get_chunk_decoder(index int) string {
	return tos3(C.Mix_GetChunkDecoder(index))
}

pub fn get_num_chunk_decoders() int {
	return C.Mix_GetNumChunkDecoders()
}

pub fn load(path string) ?&Chunk {
	chunk := C.Mix_LoadWAV(path.str)

	if chunk == 0 {
		return error(serror("Unable to load file $path"))
	}

	return chunk
}

pub fn load_rw(ops &vsdl.RWops, autofree bool) ?&Chunk {
	chunk := C.Mix_LoadWAV_RW(ops, autofree)

	if chunk == 0 {
		return error(serror("Unable to load file from RW"))
	}

	return chunk
}

pub fn (chunk &Chunk) play(channel, loops int) int {
	return channel_play(channel, chunk, loops)
}

pub fn (chunk &Chunk) play_timed(channel, loops, time int) int {
	return channel_play_timed(channel, chunk, loops, time)
}

pub fn (chunk &Chunk) set_volume(volume byte) int {
	return C.Mix_VolumeChunk(chunk, volume)
}