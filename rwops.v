module vsdl

fn C.SDL_RWclose(voidptr) int
fn C.SDL_RWFromConstMem(voidptr, int) voidptr
fn C.SDL_RWFromFile(charptr, charptr) voidptr
fn C.SDL_RWFromFP(voidptr, bool) voidptr
fn C.SDL_RWFromMem(voidptr, int) voidptr
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

pub fn (ops &RWops) close() int {
	result := ops.close_cb(ops)
	return result
}

pub fn rw_from_const_mem(stream voidptr, size int) ?&RWops {
	ops := C.SDL_RWFromConstMem(stream, size)

	if ops == 0 {
		return error(serror("Unable to open memory stream"))
	}

	return ops
}

pub fn rw_from_file(file, mode string) ?&RWops {
	ops := C.SDL_RWFromFile(file.str, mode.str)

	if ops == 0 {
		return error(serror("Unable to open file $file"))
	}

	return ops
}

pub fn rw_from_fp(fp voidptr, autoclose bool) ?&RWops {
	ops := C.SDL_RWFromFP(fp, autoclose)

	if ops == 0 {
		return error(serror("Unable to open file pointer"))
	}

	return ops
}

pub fn rw_from_mem(stream voidptr, size int) ?&RWops {
	ops := C.SDL_RWFromMem(stream, size)

	if ops == 0 {
		return error(serror("Unable to open memory stream"))
	}

	return ops
}

// read reads in a `max` amount of objects of `size` into a byte array
pub fn (ops &RWops) read(size, max u32) ([]byte, u32) {
	data := []byte{ init: 0, len: int(size) * int(max) }
	count := ops.read_cb(ops, data.data, size, max)

	return data, count
}

// read_be_16 reads a big-endian value into native format
pub fn (ops &RWops) read_be_16() i16 {
	return C.SDL_ReadBE16(ops)
}

// read_be_32 reads a big-endian value into native format
pub fn (ops &RWops) read_be_32() int {
	return C.SDL_ReadBE32(ops)
}

// read_be_64 reads a big-endian value into native format
pub fn (ops &RWops) read_be_64() i64 {
	return C.SDL_ReadBE64(ops)
}

// read_le_16 reads a little-endian value into native format
pub fn (ops &RWops) read_le_16() i16 {
	return C.SDL_ReadBE16(ops)
}

// read_le_32 reads a little-endian value into native format
pub fn (ops &RWops) read_le_32() int {
	return C.SDL_ReadBE32(ops)
}

// read_le_64 reads a little-endian value into native format
pub fn (ops &RWops) read_le_64() i64 {
	return C.SDL_ReadBE64(ops)
}

// read_be_u8 reads a byte
pub fn (ops &RWops) read_u8() byte {
	return C.SDL_ReadU8(ops)
}

// seek moves the pointer to the specificed offset based on `whence`
pub fn (ops &RWops) seek(offset i64, whence RWWhence) i64 {
	return ops.seek_cb(ops, offset, whence)
}

// tell returns the current pointer position
pub fn (ops &RWops) tell() i64 {
	return ops.seek_cb(ops, 0, RWWhence.current)
}

// write writes the provided data buffer based on `size` of object and `num`
pub fn (ops &RWops) write(data []byte, size, num u32) u32 {
	return ops.write_cb(ops, data.data, size, num)
}

// write_be_16 writes a value to the stream in big-endian format
pub fn (ops &RWops) write_be_16(data i16) bool {
	return C.SDL_WriteBE16(ops, data)
}

// write_be_32 writes a value to the stream in big-endian format
pub fn (ops &RWops) write_be_32(data int) bool {
	return C.SDL_WriteBE32(ops, data)
}

// write_be_64 writes a value to the stream in big-endian format
pub fn (ops &RWops) write_be_64(data i64) bool {
	return C.SDL_WriteBE64(ops, data)
}

// write_le_16 writes a value to the stream in big-endian format
pub fn (ops &RWops) write_le_16(data i16) bool {
	return C.SDL_WriteBE16(ops, data)
}

// write_le_32 writes a value to the stream in big-endian format
pub fn (ops &RWops) write_le_32(data int) bool {
	return C.SDL_WriteBE32(ops, data)
}

// write_le_64 writes a value to the stream in big-endian format
pub fn (ops &RWops) write_le_64(data i64) bool {
	return C.SDL_WriteBE64(ops, data)
}

// write_be_u8 writes a byte to the stream
pub fn (ops &RWops) write_u8(data byte) bool {
	return C.SDL_WriteU8(ops, data)
}