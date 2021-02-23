module mixer

import vsdl
import vsdl.system

fn C.Mix_FreeChunk(voidptr)

fn C.Mix_GetNumChunkDecoders() int

fn C.Mix_GetChunkDecoder(int) charptr

fn C.Mix_LoadWAV(charptr) voidptr

fn C.Mix_LoadWAV_RW(voidptr, bool) voidptr

fn C.Mix_VolumeChunk(voidptr, byte) int

// free frees the chunk memory
pub fn (chunk &Chunk) free() {
	C.Mix_FreeChunk(chunk)
}

// fade_in fades the chunk in on the provided channel
pub fn (chunk &Chunk) fade_in(channel int, loop int, ms int) int {
	return channel_fade_in(channel, chunk, loop, ms)
}

// fade_in_timed fades in the chunk and runs it for the specified `time`
pub fn (chunk &Chunk) fade_in_timed(channel int, loop int, ms int, time int) int {
	return channel_fade_in_timed(channel, chunk, loop, ms, time)
}

// get_chunk_decoder returns back the name of the decoder for the chunk
pub fn get_chunk_decoder(index int) string {
	return unsafe { tos3(C.Mix_GetChunkDecoder(index)) }
}

// get_num_chunk_decoders gets the number of available decoders
pub fn get_num_chunk_decoders() int {
	return C.Mix_GetNumChunkDecoders()
}

// load_chunk loads in a chunk from the provided `path`
pub fn load_chunk(path string) ?&Chunk {
	chunk := C.Mix_LoadWAV(path.str)
	if chunk == 0 {
		return error(serror('Unable to load file $path'))
	}
	return chunk
}

// load_chunk_rw loads in a chunk via a `RWops` object
pub fn load_chunk_rw(ops &system.RWops, autofree bool) ?&Chunk {
	chunk := C.Mix_LoadWAV_RW(ops, autofree)
	if chunk == 0 {
		return error(serror('Unable to load file from RW'))
	}
	return chunk
}

// play plays the chunk on the provided channel
pub fn (chunk &Chunk) play(channel int, loops int) int {
	return channel_play(channel, chunk, loops)
}

// play_timed plays the chunk on the provided channel for `time`
pub fn (chunk &Chunk) play_timed(channel int, loops int, time int) int {
	return channel_play_timed(channel, chunk, loops, time)
}

// set_volume sets the volume for this chunk
pub fn (chunk &Chunk) set_volume(volume byte) int {
	return C.Mix_VolumeChunk(chunk, volume)
}
