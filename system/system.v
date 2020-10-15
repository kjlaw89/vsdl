module system

fn C.SDL_GetCPUCacheLineSize() int

fn C.SDL_GetCPUCount() int

fn C.SDL_GetSystemRAM() int

fn C.SDL_GetPlatform() charptr

fn C.SDL_GetPowerInfo(voidptr, voidptr) int

fn C.SDL_Has3DNow() bool

fn C.SDL_HasAVX() bool

fn C.SDL_HasAVX2() bool

fn C.SDL_HasAltiVec() bool

fn C.SDL_HasMMX() bool

fn C.SDL_HasRDTSC() bool

fn C.SDL_HasSSE() bool

fn C.SDL_HasSSE2() bool

fn C.SDL_HasSSE3() bool

fn C.SDL_HasSSE41() bool

fn C.SDL_HasSSE42() bool

fn C.SDL_LoadFunction(voidptr, charptr) voidptr

fn C.SDL_LoadObject(charptr) voidptr

fn C.SDL_UnloadObject(voidptr)

pub fn get_cpu_cache_line_size() int {
	return C.SDL_GetCPUCacheLineSize()
}

// get_cpu_count returns the amount of logical CPU cores (includes hyperthreaded cores)
pub fn get_cpu_count() int {
	return C.SDL_GetCPUCount()
}

// get_memory returns the amount of system RAM in MB
pub fn get_memory() int {
	return C.SDL_GetSystemRAM()
}

// get_platform returns the platform being run on
pub fn get_platform() string {
	return tos3(C.SDL_GetPlatform())
}

// get_power_state returns back the current `PowerState`, seconds, and percentage left
// If battery is not available, -1 will be returned back for seconds & percentage
pub fn get_power_state() (PowerState, int, int) {
	secs := 0
	pct := 0
	result := C.SDL_GetPowerInfo(&secs, &pct)
	return result, secs, pct
}

// has_3d_now checks if the cpu supports AVX features
pub fn has_avx() bool {
	return C.SDL_HasAVX()
}

// has_3d_now checks if the cpu supports AVX2 features
pub fn has_avx2() bool {
	return C.SDL_HasAVX2()
}

// has_alti_vec checks if the cpu supports AltiVec features
pub fn has_alti_vec() bool {
	return C.SDL_HasAltiVec()
}

// has_mmx checks if the cpu supports MMX features
pub fn has_mmx() bool {
	return C.SDL_HasMMX()
}

// has_rdtsc checks if the cpu supports RDTSC features
pub fn has_rdtsc() bool {
	return C.SDL_HasRDTSC()
}

// has_sse checks if the cpu supports SSE features
pub fn has_sse() bool {
	return C.SDL_HasSSE()
}

// has_sse2 checks if the cpu supports SSE2 features
pub fn has_sse2() bool {
	return C.SDL_HasSSE2()
}

// has_sse3 checks if the cpu supports SSE3 features
pub fn has_sse3() bool {
	return C.SDL_HasSSE3()
}

// has_sse41 checks if the cpu supports SSE4.1 features
pub fn has_sse41() bool {
	return C.SDL_HasSSE41()
}

// has_sse42 checks if the cpu supports SSE4.2 features
pub fn has_sse42() bool {
	return C.SDL_HasSSE42()
}

pub fn load_function(handle voidptr, name string) ?voidptr {
	result := C.SDL_LoadFunction(handle, name.str)
	if result == 0 {
		return error(serror('Unable to load function $name'))
	}
	return result
}

pub fn load_object(file string) ?voidptr {
	result := C.SDL_LoadObject(file.str)
	if result == 0 {
		return error(serror('Unable to load object $file'))
	}
	return result
}

pub fn unload_object(ptr voidptr) {
	C.SDL_UnloadObject(ptr)
}

fn serror(text string) string {
	msg := tos3(C.SDL_GetError())
	return '$text: $msg'
}
