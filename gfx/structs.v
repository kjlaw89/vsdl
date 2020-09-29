module gfx

/* Top-level structures */
pub struct Cursor {
mut:
	ptr   voidptr
}

pub struct Display {
	format       u32
	w            int
	h            int
	refresh_rate int
	driverdata   voidptr
}

pub struct Renderer {
mut:
	ptr voidptr
}

pub struct Surface {
mut:
	flags     u32
	format    &PixelFormat
	w         int
	h         int
	pitch     int
	pixels    voidptr
	userdata  voidptr
	locked    int
	lock_data voidptr
	clip_rect Rect
	blit_map  voidptr
	refcount  int
}

pub struct Texture {
mut:
	h  int
	ptr voidptr
	w  int
}

pub struct Window {
mut:
	ptr voidptr
}

/* Formatting structures */
struct PixelFormat {
mut:
	format         u32
	palette        &Palette
	bits_per_pixel byte
	bytes_per_pixe byte
	padding        [2]byte
	r_mask         u32
	g_mask         u32
	b_mask         u32
	a_mask         u32
	r_loss         byte
	g_loss         byte
	b_loss         byte
	a_loss         byte
	r_shift        byte
	g_shift        byte
	b_shift        byte
	a_shift        byte
	refcount       int
	next           &PixelFormat
}

struct Palette {
mut:
	n_colors int
	colors   Color
	version  u32
	refcount int
}

pub struct Color {
pub mut:
	r byte
	g byte
	b byte
	a byte = 255
}

pub struct Point {
pub mut:
	x int
	y int
}

pub struct Rect {
pub mut:
	x int
	y int
	w int
	h int
}