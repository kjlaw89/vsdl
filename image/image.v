module image

import vsdl
import vsdl.gfx

#flag -I @VROOT/headers
#flag -L .
#flag -lSDL2_image
#flag -lSDL2
#include "image/SDL_image.h"
fn C.IMG_GetError() charptr

fn C.IMG_Init(int) int

fn C.IMG_Load(charptr) voidptr

fn C.IMG_Load_RW(voidptr, bool) voidptr

fn C.IMG_LoadTyped_RW(voidptr, bool, charptr) voidptr

fn C.IMG_LoadTGA_RW(voidptr) voidptr

fn C.IMG_isCUR(voidptr) bool

fn C.IMG_isICO(voidptr) bool

fn C.IMG_isBMP(voidptr) bool

fn C.IMG_isXPM(voidptr) bool

fn C.IMG_isXCF(voidptr) bool

fn C.IMG_isPCX(voidptr) bool

fn C.IMG_isGIF(voidptr) bool

fn C.IMG_isJPG(voidptr) bool

fn C.IMG_isTIF(voidptr) bool

fn C.IMG_isPNG(voidptr) bool

fn C.IMG_isLBM(voidptr) bool

fn C.IMG_isXV(voidptr) bool

fn C.IMG_Quit()

pub enum ImgFlags {
	jpg = 0x0001
	png = 0x0002
	tif = 0x0004
	webp = 0x0008
}

// init initializes the img library with the provided flags
// Note: This can be used to preload libraries. If not called
// it will automatically be called once when needed for a filetype
pub fn init(flags ...ImgFlags) int {
	// Sum the flags
	mut flag := 0
	for f in flags {
		flag = flag | f
	}
	return C.IMG_Init(flag)
}

pub fn is_cur(ops &vsdl.RWops) bool {
	return C.IMG_isCUR(ops)
}

pub fn is_ico(ops &vsdl.RWops) bool {
	return C.IMG_isICO(ops)
}

pub fn is_bmp(ops &vsdl.RWops) bool {
	return C.IMG_isBMP(ops)
}

pub fn is_xpm(ops &vsdl.RWops) bool {
	return C.IMG_isXPM(ops)
}

pub fn is_xcf(ops &vsdl.RWops) bool {
	return C.IMG_isXCF(ops)
}

pub fn is_pcx(ops &vsdl.RWops) bool {
	return C.IMG_isPCX(ops)
}

pub fn is_gif(ops &vsdl.RWops) bool {
	return C.IMG_isGIF(ops)
}

pub fn is_jpg(ops &vsdl.RWops) bool {
	return C.IMG_isJPG(ops)
}

pub fn is_tif(ops &vsdl.RWops) bool {
	return C.IMG_isTIF(ops)
}

pub fn is_png(ops &vsdl.RWops) bool {
	return C.IMG_isPNG(ops)
}

pub fn is_lbm(ops &vsdl.RWops) bool {
	return C.IMG_isLBM(ops)
}

pub fn is_xv(ops &vsdl.RWops) bool {
	return C.IMG_isXV(ops)
}

// load loads in an image based on the provided path
// file type is determined automatically and TGA can
// be automatically detected if file ends in ".tga"
pub fn load(path string) ?&gfx.Surface {
	surface := C.IMG_Load(path.str)
	if surface == 0 {
		return error(serror("Unable to load image '$path'"))
	}
	return surface
}

// load_rw loads in an image via a `RWops` object
pub fn load_rw(ops &vsdl.RWops, autofree bool) ?&gfx.Surface {
	surface := C.IMG_Load_RW(ops, autofree)
	if surface == 0 {
		return error(serror('Unable to load image'))
	}
	return surface
}

// load_rw loads in an image via a `RWops` object with specified image type
pub fn load_typed_rw(ops &vsdl.RWops, autofree bool, img_type string) ?&gfx.Surface {
	surface := C.IMG_LoadTyped_RW(ops, autofree, img_type.str)
	if surface == 0 {
		return error(serror('Unable to load image'))
	}
	return surface
}

pub fn quit() {
	C.IMG_Quit()
}

fn serror(text string) string {
	msg := tos3(C.IMG_GetError())
	return '$text: $msg'
}
