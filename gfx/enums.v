module gfx

pub enum BlendMode {
    @none = 0x00000000
    blend = 0x00000001
    add = 0x00000002
    mod = 0x00000004
    mul = 0x00000008
    invalid = 0x7FFFFFFF
}

pub enum CursorMode {
	query   = -1
	disable = 0
	enable  = 1
}

pub enum CursorType {
	arrow
	ibeam
	wait
	crosshair
	waitarrow
	sizenwse
	sizenews
	sizewe
	sizens
	sizeall
	block
	hand
}

pub enum FullscreenMode {
	windowed = 0
	fullscreen = 1
	fullscreen_desktop = 4097
}

pub enum GLAttr {
	red_size
	green_size
	blue_size
	alpha_size
	buffer_size
	doublebuffer
	depth_size
	stencil_size
	accum_red_size
	accum_green_size
	accum_blue_size
	accum_alpha_size
	stereo
	multisamplebuffers
	multisamplesamples
	accelerated_visual
	retained_backing
	context_major_version
	context_minor_version
	context_egl
	context_flags
	context_profile_mask
	share_with_current_context
	framebuffer_srgb_capable
	context_release_behavior
	context_reset_notification
	context_no_error
}

pub enum MessageBoxFlags {
	@none                 = 0x00000000
	error                 = 0x00000010
	warning               = 0x00000020
	information           = 0x00000040
	buttons_left_to_right = 0x00000080
	buttons_right_to_left = 0x00000100
}

pub enum MessageBoxButtonFlags {
	@none          = 0x00000000
	return_key     = 0x00000001
	escape_key     = 0x00000002
}

pub enum PixelFormats {
	unknown   = 0
	index1lsb = 286261504
	index1msb = 287310080
	index4lsb = 303039488
	index4msb = 304088064
	index8    = 318769153
	rgb332    = 336660481
	rgb444    = 353504258
	bgr444    = 357698562
	rgb555    = 353570562
	bgr555    = 357764866
	argb4444  = 355602434
	rgba4444  = 356651010
	abgr4444  = 359796738
	bgra4444  = 360845314
	argb1555  = 355667970
	rgba5551  = 356782082
	abgr1555  = 359862274
	bgra5551  = 360976386
	rgb565    = 353701890
	bgr565    = 357896194
	rgb24     = 386930691
	bgr24     = 390076419
	rgb888    = 370546692
	rgbx8888  = 371595268
	bgr888    = 374740996
	bgrx8888  = 375789572
	argb2101010 = 372711428 

	/* aliases for rgba byte arrays of color data, for the current platform */
	//#if sdl_byteorder == sdl_big_endian
	//rgba32 = rgba8888
	//argb32 = argb8888
	//bgra32 = bgra8888
	//abgr32 = abgr8888
	//#else
	rgba32 = 376840196
	argb32 = 377888772
	bgra32 = 372645892
	abgr32 = 373694468
	//#endif

	yv12 = 842094169
	iyuv = 1448433993
	yuy2 = 844715353
	uyvy = 1498831189
	yvyu = 1431918169
	nv12 = 842094158
	nv21 = 825382478
	external_oes = 542328143
}

pub enum RendererFlip {
	@none = 0
	horizontal = 1
	vertical = 2
}

pub enum TextureAccess {
	@static
	streaming
	target
}

pub enum WindowFlags {
    fullscreen = 0x00000001
    opengl = 0x00000002
    shown = 0x00000004
    hidden = 0x00000008
    borderless = 0x00000010
    resizable = 0x00000020
    minimized = 0x00000040
    maximized = 0x00000080
    input_grabbed = 0x00000100
    input_focus = 0x00000200
    mouse_focus = 0x00000400
    fullscreen_desktop = 0x00001001
    foreign = 0x00000800
    allow_highdpi = 0x00002000
    mouse_capture = 0x00004000
    always_on_top = 0x00008000
    skip_taskbar  = 0x00010000
    utility       = 0x00020000
    tooltip       = 0x00040000
    popup_menu    = 0x00080000
    vulkan        = 0x10000000
}