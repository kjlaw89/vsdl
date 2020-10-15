module mixer

pub type MusicCallback = fn (voidptr, voidptr, int)

pub type MusicFinishedCallback = fn ()

fn C.Mix_FadingMusic() int

fn C.Mix_FadeInMusic(voidptr, int, int) int

fn C.Mix_FadeInMusicPos(voidptr, int, int, f64) int

fn C.Mix_FadeOutMusic(int) int

fn C.Mix_FreeMusic(voidptr)

fn C.Mix_GetNumMusicDecoders() int

fn C.Mix_GetMusicDecoder(int) charptr

fn C.Mix_GetMusicType(voidptr) int

fn C.Mix_HaltMusic()

fn C.Mix_HookMusicFinished(voidptr)

fn C.Mix_HookMusic(voidptr, voidptr)

fn C.Mix_LoadMUS(charptr) voidptr

fn C.Mix_PauseMusic()

fn C.Mix_PausedMusic() bool

fn C.Mix_PlayMusic(voidptr, int) int

fn C.Mix_PlayingMusic() bool

fn C.Mix_ResumeMusic()

fn C.Mix_RewindMusic()

fn C.Mix_SetMusicPosition(f64) int

fn C.Mix_VolumeMusic(int) int

// fade_in fades the music in over `ms`
pub fn (music Music) fade_in(loops int, ms int) bool {
	return C.Mix_FadeInMusic(music.ptr, loops, ms) == 0
}

// fade_in_pos fades in the music at `position`
pub fn (music Music) fade_in_pos(loops int, ms int, position f64) bool {
	return C.Mix_FadeInMusicPos(music.ptr, loops, ms, position) == 0
}

// fade_out_music fades out music over `ms`
pub fn fade_out_music(ms int) bool {
	return C.Mix_FadeOutMusic(ms) > 0
}

// free frees the `Music` object
pub fn (mut music Music) free() {
	if music.ptr == 0 {
		return
	}
	C.Mix_FreeMusic(music.ptr)
	music.ptr = 0
}

// get_num_music_decoders gets the numbers of music decoders
pub fn get_num_music_decoders() int {
	return C.Mix_GetNumMusicDecoders()
}

// get_music_decoder gets the name of the provided music decoder
pub fn get_music_decoder(index int) string {
	return tos3(C.Mix_GetMusicDecoder(index))
}

// hook_music allows hooking into the playback process by providing a `callback`
pub fn hook_music(callback MusicCallback, data voidptr) {
	C.Mix_HookMusic(callback, data)
}

// hook_music_finished calls a function when the current music is finished playing
pub fn hook_music_finished(callback MusicFinishedCallback) {
	C.Mix_HookMusicFinished(callback)
}

// is_fading_music returns back the current fading status
pub fn is_fading_music() Fading {
	return C.Mix_FadingMusic()
}

// is_paused_music returns back if music is paused
pub fn is_paused_music() bool {
	return C.Mix_PausedMusic()
}

// is_playing_music returns back if music is actively playing
pub fn is_playing_music() bool {
	return C.Mix_PlayingMusic()
}

// load_music loads a music track from `path`
pub fn load_music(path string) ?Music {
	ptr := C.Mix_LoadMUS(path.str)
	if ptr == 0 {
		return error(serror('Unable to load music from $path'))
	}
	return Music{
		ptr: ptr
		@type: C.Mix_GetMusicType(ptr)
	}
}

// pause_music pauses all currently playing music
pub fn pause_music() {
	C.Mix_PauseMusic()
}

// play plays the `Music` object
pub fn (music Music) play(loops int) bool {
	return C.Mix_PlayMusic(music.ptr, loops) == 0
}

// resume_music resumes any active music
pub fn resume_music() {
	C.Mix_ResumeMusic()
}

// rewind_music rewinds all music to the beginning
pub fn rewind_music() {
	C.Mix_RewindMusic()
}

// set_music_position sets the currently playing music's position
pub fn set_music_position(position f64) bool {
	return C.Mix_SetMusicPosition(position) == 0
}

// set_music_volume sets the currently playing music's volume
pub fn set_music_volume(volume int) int {
	return C.Mix_VolumeMusic(volume)
}

// stop_music stops all playing music
pub fn stop_music() {
	C.Mix_HaltMusic()
}
