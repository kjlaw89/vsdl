module vsdl

pub type OpsSizeCallback = fn(voidptr) i64
pub type OpsSeekCallback = fn(voidptr, i64, int) i64
pub type OpsReadCallback = fn(voidptr, byteptr, u32, u32) u32
pub type OpsWriteCallback = fn(voidptr, voidptr, u32, u32) u32
pub type OpsCloseCallback = fn(voidptr) int

pub struct RWops {
mut:
	size_cb    OpsSizeCallback
	seek_cb    OpsSeekCallback
	read_cb    OpsReadCallback
	write_cb   OpsWriteCallback
	close_cb   OpsCloseCallback
	@type   u32
	// hidden union
}