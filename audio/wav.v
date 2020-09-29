module audio

fn C.SDL_FreeWAV(voidptr)
fn C.SDL_LoadWAV(charptr, voidptr, byteptr, voidptr) voidptr

// load_wav loads a .wav file into memory and returns an `AudioData` reference
pub fn load_wav(path string) ?&AudioData {
	mut data := &AudioData{ path: path }

	if C.SDL_LoadWAV(path.str, &data.spec, &data.ptr, &data.len) == 0 {
		return error(serror("Unable to load wav $path"))
	}

	return data
}

// get_loop returns true if this audio track is set to loop
pub fn (data &AudioData) get_loop() bool {
	return data.loop
}

// get_pos returns the position of the track complete as a percentage
pub fn (data &AudioData) get_pos() f32 {
	return f32((f64(data.pos) / f64(data.len)) * 100)
}

// get_pos_byte returns the byte position of the track
pub fn (data &AudioData) get_pos_byte() u32 {
	return data.pos
}

// get_remaining returns the amount of bytes that are still queued to play
pub fn (data &AudioData) get_remaining() u32 {
	remaining := data.len - data.pos
	return if remaining < 0 { 0 } else { remaining }	
}

// get_spec returns the specifications about this audio track
pub fn (data &AudioData) get_spec() AudioSpec {
	return data.spec
}

// get_volume gets the current volume level of the audio track
pub fn (data &AudioData) get_volume() i8 {
	return data.volume
}

// free frees the data buffer from memory
// Note: This only works when run against the original wav_file
pub fn (mut data AudioData) free() bool {
	if data.ptr == 0 || data.copy {
		return false
	}

	C.SDL_FreeWAV(data.ptr)
	data.len = 0
	data.ptr = 0
	data.pos = 0
	return true
}

// set_loop sets the track to loop or not loop
pub fn (mut data AudioData) set_loop(loop bool) {
	data.loop = loop
}

// set_pos sets the position of the track based on a percentage from 0-100
pub fn (mut data AudioData) set_pos(pos f32) {
	if pos > 100 {
		data.pos = data.len
		return
	}

	if pos <= 0 {
		data.pos = 0
		return
	}

	data.device.lock_callback()

	updated_pos := u32(f64(data.len) * (pos / 100))
	data.pos = updated_pos - (updated_pos % 8)  // align to the nearest byte

	data.device.unlock_callback()
}

// set_pos_byte sets the position of the track by byte
pub fn (mut data AudioData) set_pos_byte(pos u32) {
	data.device.lock_callback()

	mut updated_pos := pos - (pos % 8) // align to nearest byte
	if updated_pos < 0 {
		updated_pos = 0
	}

	data.pos = updated_pos

	data.device.unlock_callback()
}

// set_volume sets the volume level of the audio track
pub fn (mut data AudioData) set_volume(volume i8) {
	data.device.lock_callback()

	data.volume = if volume < 0 { 0 } else { volume }

	data.device.unlock_callback()
}