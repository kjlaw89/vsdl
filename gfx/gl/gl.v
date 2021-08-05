module gl

import vsdl
import vsdl.gfx

fn C.SDL_GL_BindTexture(voidptr, voidptr, voidptr) int

fn C.SDL_GL_CreateContext(voidptr) voidptr

fn C.SDL_GL_DeleteContext(voidptr)

fn C.SDL_GL_ExtensionSupported(charptr) bool

fn C.SDL_GL_GetAttribute(int, voidptr) int

fn C.SDL_GL_GetCurrentContext() voidptr

fn C.SDL_GL_GetCurrentWindow() voidptr

fn C.SDL_GL_GetDrawableSize(voidptr, voidptr, voidptr)

fn C.SDL_GL_GetProcAddress(charptr) voidptr

fn C.SDL_GL_GetSwapInterval() int

fn C.SDL_GL_LoadLibrary(charptr) int

fn C.SDL_GL_MakeCurrent(voidptr, voidptr) int

fn C.SDL_GL_ResetAttributes()

fn C.SDL_GL_SetAttribute(int, int) int

fn C.SDL_GL_SetSwapInterval(int) int

fn C.SDL_GL_SwapWindow(voidptr)

fn C.SDL_GL_UnbindTexture(voidptr)

fn C.SDL_GL_UnloadLibrary()

fn init() {
	load_library('') or { }
}

// create_context gets a new GL context object for the `Window`
pub fn create_context(window gfx.Window) ?GLContext {
	context := GLContext{
		ptr: C.SDL_GL_CreateContext(window.ptr)
	}
	if context.ptr == 0 {
		return error(serror('Unable to get GL context'))
	}
	return context
}

// destroy frees the `GLContext`
pub fn (mut context GLContext) destroy() {
	if context.ptr == 0 {
		return
	}
	C.SDL_GL_DeleteContext(context.ptr)
	context.ptr = voidptr(0)
}

// get_drawsize returns the width and height of the draw space
pub fn get_drawsize(window gfx.Window) (int, int) {
	w := 0
	h := 0
	C.SDL_GL_GetDrawableSize(window.ptr, &w, &h)
	return w, h
}

// bind_texture binds a `Texture` to the current `GLContext`
pub fn bind_texture(texture gfx.Texture) (f32, f32) {
	w := f32(0)
	h := f32(0)
	C.SDL_GL_BindTexture(texture.ptr, &w, &h)
	return w, h
}

// extension_support verifies that the provided extension is supported
pub fn extension_supported(extension string) bool {
	return C.SDL_GL_ExtensionSupported(extension.str)
}

// get_attribute returns the value of the provided attribute
pub fn get_attribute(attribute GLAttr) int {
	value := 0
	C.SDL_GL_GetAttribute(int(attribute), &value)
	return value
}

// get_current_context returns a copy of the current `GLContext`
pub fn get_current_context() ?GLContext {
	context := GLContext{
		ptr: C.SDL_GL_GetCurrentContext()
	}
	if context.ptr == 0 {
		return error(serror('Unable to get current context'))
	}
	return context
}

// get_procaddress returns the address of the OpenGL library
pub fn get_procaddr(proc string) voidptr {
	return C.SDL_GL_GetProcAddress(proc.str)
}

// get_swap_interval returns the swap interval value
pub fn get_swap_interval() int {
	return C.SDL_GL_GetSwapInterval()
}

// load_library loads the OpenGL library from the provided `path`
// If an empty string is provided it will attempt to load via the system path
pub fn load_library(path string) ? {
	mut result := 0
	if path == '' {
		result = C.SDL_GL_LoadLibrary(C.NULL)
	} else {
		result = C.SDL_GL_LoadLibrary(path.str)
	}
	if result < 0 {
		return error(serror('Unable to load GL library at $path'))
	}
}

// reset_attributes resets all attributes to their default values
pub fn reset_attributes() {
	C.SDL_GL_ResetAttributes()
}

// set_attribute sets the value for the provided attribute
pub fn set_attribute(attribute GLAttr, value int) {
	C.SDL_GL_SetAttribute(int(attribute), value)
}

// set_swap_interval sets the interval value
pub fn set_swap_interval(interval int) {
	C.SDL_GL_SetSwapInterval(interval)
}

// unbind_texture unbinds this `Texture` from the `GLContext`
pub fn unbind_texture(texture gfx.Texture) {
	C.SDL_GL_UnbindTexture(texture.ptr)
}

// unload_library unloads the OpenGL library from memory
pub fn unload_library() {
	C.SDL_GL_UnloadLibrary()
}

// set_context changes the `GLContext` of the window to the provided context
pub fn set_context(window gfx.Window, context GLContext) bool {
	return C.SDL_GL_MakeCurrent(window.ptr, context.ptr) == 0
}

// swap the GL buffer for the `Window` to display updated content
pub fn swap(window gfx.Window) {
	C.SDL_GL_SwapWindow(window.ptr)
}

fn serror(text string) string {
	msg := unsafe { tos3(C.SDL_GetError()) }
	return '$text: $msg'
}
