module gfx

pub type SDL_vulkanInstance = voidptr
pub type SDL_vulkanSurface = voidptr

fn C.SDL_Vulkan_CreateSurface(voidptr, SDL_vulkanInstance, &SDL_vulkanSurface) bool
fn C.SDL_Vulkan_GetDrawableSize(voidptr, voidptr, voidptr)
fn C.SDL_Vulkan_GetInstanceExtensions(voidptr, voidptr, charptr) bool
fn C.SDL_Vulkan_GetVkGetInstanceProcAddr() voidptr
fn C.SDL_Vulkan_LoadLibrary(charptr) int
fn C.SDL_Vulkan_UnloadLibrary()

pub fn (window Window) create_vulkan_surface(instance SDL_vulkanInstance) ?SDL_vulkanSurface {
	surface := SDL_vulkanSurface(0)
	if !C.SDL_Vulkan_CreateSurface(window.ptr, instance, &surface) {
		return error(serror("Unable to initialize Vulkan surface"))
	}

	return surface
}

pub fn (window Window) get_vulkan_drawsize() (int, int) {
	w := 0
	h := 0

	C.SDL_Vulkan_GetDrawableSize(window.ptr, &w, &h)

	return w, h
}

pub fn (window Window) get_vulkan_extensions() []string {
	count := 0
	C.SDL_Vulkan_GetInstanceExtensions(window.ptr, &count, C.NULL)

	if count == 0 {
		return []string{}
	}

	pointers := []charptr{ len: int(count) }
	mut extensions := []string{ len: int(count) }
	C.SDL_Vulkan_GetInstanceExtensions(window.ptr, &count, &pointers)

	for i, _ in pointers {
		extensions[i] = tos3(pointers[i])
	}

	return extensions
}

pub fn vulkan_load(path string) ? {
	mut result := -1

	if path.len > 0 {
		result = C.SDL_Vulkan_LoadLibrary(path.str)
	} else {
		result = C.SDL_Vulkan_LoadLibrary(C.NULL)
	}

	if result < 0 {
		return error(serror("Unable to load Vulkan library at $path"))
	}
}

pub fn vulkan_get_procaddr() voidptr {
	return C.SDL_Vulkan_GetVkGetInstanceProcAddr()
}

pub fn vulkan_unload() {
	C.SDL_Vulkan_UnloadLibrary()
}