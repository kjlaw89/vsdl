module system

fn C.SDL_Swap16(i16) i16 
fn C.SDL_Swap32(int) int 
fn C.SDL_Swap64(i64) i64 
fn C.SDL_SwapBE16(i16) i16 
fn C.SDL_SwapBE32(int) int
fn C.SDL_SwapBE64(i64) i64
fn C.SDL_SwapFloat(f32) f32 
fn C.SDL_SwapFloatBE(f32) f32 
fn C.SDL_SwapFloatLE(f32) f32
fn C.SDL_SwapLE16(i16) i16 
fn C.SDL_SwapLE32(int) int
fn C.SDL_SwapLE64(i64) i64

pub fn swap_16(swap i16) i16 {
	return C.SDL_Swap16(swap)
}

pub fn swap_32(swap int) int {
	return C.SDL_Swap32(swap)
}

pub fn swap_64(swap i64) i64 {
	return C.SDL_Swap64(swap)
}

pub fn swap_be_16(swap i16) i16 {
	return C.SDL_SwapBE16(swap)
}

pub fn swap_be_32(swap int) int {
	return C.SDL_SwapBE32(swap)
}

pub fn swap_be_64(swap i64) i64 {
	return C.SDL_SwapBE64(swap)
}

pub fn swap_float(swap f32) f32 {
	return C.SDL_SwapFloat(swap)
}

pub fn swap_float_be(swap f32) f32 {
	return C.SDL_SwapFloatBE(swap)
}

pub fn swap_float_le(swap f32) f32 {
	return C.SDL_SwapFloatLE(swap)
}

pub fn swap_le_16(swap i16) i16 {
	return C.SDL_SwapLE16(swap)
}

pub fn swap_le_32(swap int) int {
	return C.SDL_SwapLE32(swap)
}

pub fn swap_le_64(swap i64) i64 {
	return C.SDL_SwapLE64(swap)
}