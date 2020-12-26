module platform

fn C.SDL_AndroidGetActivity() voidptr

fn C.SDL_AndroidGetExternalStoragePath() charptr

fn C.SDL_AndroidGetExternalStorageState() int

fn C.SDL_AndroidGetInternalStoragePath() charptr

fn C.SDL_AndroidGetJNIEnv() voidptr

pub fn android_get_activity() voidptr {
	return C.SDL_AndroidGetActivity()
}

pub fn android_get_external_storage_path() string {
	path := C.SDL_AndroidGetExternalStoragePath()
	return tos3(path)
}

pub fn android_get_external_storage_state() int {
	return C.SDL_AndroidGetExternalStorageState()
}

pub fn android_get_internal_storage_path() string {
	return tos3(C.SDL_AndroidGetInternalStoragePath())
}

pub fn android_get_jni_env() voidptr {
	return C.SDL_AndroidGetJNIEnv()
}
