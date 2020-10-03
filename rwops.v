module vsdl

fn C.SDL_RWclose(voidptr) int
fn C.SDL_RWFromConstMem(voidptr, int) voidptr
fn C.SDL_RWFromFile(charptr, charptr) voidptr
fn C.SDL_RWFromFP(voidptr, bool) voidptr
fn C.SDL_RWFromMem(voidptr, int) voidptr
fn C.SDL_RWread(voidptr, byteptr, u32, u32) u32
fn C.SDL_RWseek(voidptr, i64, int) i64
fn C.SDL_RWtell(voidptr) i64
fn C.SDL_RWwrite(voidptr, byteptr, u32, u32) u32
fn C.SDL_ReadBE16(voidptr) i16
fn C.SDL_ReadBE32(voidptr) int
fn C.SDL_ReadBE64(voidptr) i64
fn C.SDL_ReadLE16(voidptr) i16
fn C.SDL_ReadLE32(voidptr) int
fn C.SDL_ReadLE64(voidptr) i64
fn C.SDL_ReadU8(voidptr) byte
fn C.SDL_WriteBE16(voidptr, i16) bool
fn C.SDL_WriteBE32(voidptr, int) bool
fn C.SDL_WriteBE64(voidptr, i64) bool
fn C.SDL_WriteLE16(voidptr, i16) bool
fn C.SDL_WriteLE32(voidptr, int) bool
fn C.SDL_WriteLE64(voidptr, i64) bool
fn C.SDL_WriteU8(voidptr, byte) bool

pub fn (mut ops RWops) close() int {
	if ops.ptr == 0 {
		return 0
	}

	result := C.SDL_RWclose(ops.ptr)
	ops.ptr = 0

	return result
}

pub fn (ops RWops) get_ptr() voidptr {
	return ops.ptr
}

pub fn rw_from_const_mem(stream voidptr, size int) ?RWops {
	ops := RWops{ ptr: C.SDL_RWFromConstMem(stream, size) }

	if ops.ptr == 0 {
		return error(serror("Unable to open memory stream"))
	}

	return ops
}

pub fn rw_from_file(file, mode string) ?RWops {
	ops := RWops{ ptr: C.SDL_RWFromFile(file.str, mode.str) }

	if ops.ptr == 0 {
		return error(serror("Unable to open file $file"))
	}

	return ops
}

pub fn rw_from_fp(fp voidptr, autoclose bool) ?RWops {
	ops := RWops{ ptr: C.SDL_RWFromFP(fp, autoclose) }

	if ops.ptr == 0 {
		return error(serror("Unable to open file pointer"))
	}

	return ops
}

pub fn rw_from_mem(stream voidptr, size int) ?RWops {
	ops := RWops{ ptr: C.SDL_RWFromMem(stream, size) }

	if ops.ptr == 0 {
		return error(serror("Unable to open memory stream"))
	}

	return ops
}

// read reads in a `max` amount of objects of `size` into a byte array
pub fn (ops RWops) read(size, max u32) ([]byte, u32) {
	data := []byte{ init: 0, len: int(size) * int(max) }
	count := C.SDL_RWread(ops.ptr, data.data, size, max)

	return data, count
}

// read_be_16 reads a big-endian value into native format
pub fn (ops RWops) read_be_16() i16 {
	return C.SDL_ReadBE16(ops.ptr)
}

// read_be_32 reads a big-endian value into native format
pub fn (ops RWops) read_be_32() int {
	return C.SDL_ReadBE32(ops.ptr)
}

// read_be_64 reads a big-endian value into native format
pub fn (ops RWops) read_be_64() i64 {
	return C.SDL_ReadBE64(ops.ptr)
}

// read_le_16 reads a little-endian value into native format
pub fn (ops RWops) read_le_16() i16 {
	return C.SDL_ReadBE16(ops.ptr)
}

// read_le_32 reads a little-endian value into native format
pub fn (ops RWops) read_le_32() int {
	return C.SDL_ReadBE32(ops.ptr)
}

// read_le_64 reads a little-endian value into native format
pub fn (ops RWops) read_le_64() i64 {
	return C.SDL_ReadBE64(ops.ptr)
}

// read_be_u8 reads a byte
pub fn (ops RWops) read_u8() byte {
	return C.SDL_ReadU8(ops.ptr)
}

// seek moves the pointer to the specificed offset based on `whence`
pub fn (ops RWops) seek(offset i64, whence RWWhence) i64 {
	return C.SDL_RWseek(ops.ptr, offset, whence)
}

// tell returns the current pointer position
pub fn (ops RWops) tell() i64 {
	return C.SDL_RWtell(ops.ptr)
}

// write writes the provided data buffer based on `size` of object and `num`
pub fn (ops RWops) write(data []byte, size, num u32) u32 {
	return C.SDL_RWwrite(ops.ptr, data.data, size, num)
}

// write_be_16 writes a value to the stream in big-endian format
pub fn (ops RWops) write_be_16(data i16) bool {
	return C.SDL_WriteBE16(ops.ptr, data)
}

// write_be_32 writes a value to the stream in big-endian format
pub fn (ops RWops) write_be_32(data int) bool {
	return C.SDL_WriteBE32(ops.ptr, data)
}

// write_be_64 writes a value to the stream in big-endian format
pub fn (ops RWops) write_be_64(data i64) bool {
	return C.SDL_WriteBE64(ops.ptr, data)
}

// write_le_16 writes a value to the stream in big-endian format
pub fn (ops RWops) write_le_16(data i16) bool {
	return C.SDL_WriteBE16(ops.ptr, data)
}

// write_le_32 writes a value to the stream in big-endian format
pub fn (ops RWops) write_le_32(data int) bool {
	return C.SDL_WriteBE32(ops.ptr, data)
}

// write_le_64 writes a value to the stream in big-endian format
pub fn (ops RWops) write_le_64(data i64) bool {
	return C.SDL_WriteBE64(ops.ptr, data)
}

// write_be_u8 writes a byte to the stream
pub fn (ops RWops) write_u8(data byte) bool {
	return C.SDL_WriteU8(ops.ptr, data)
}