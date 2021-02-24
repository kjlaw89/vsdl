module audio

fn C.SDL_ClearQueuedAudio(voidptr)

fn C.SDL_CloseAudioDevice(voidptr)

fn C.SDL_DequeueAudio(voidptr, byteptr, u32) u32

fn C.SDL_GetAudioDeviceStatus(voidptr) int

fn C.SDL_GetQueuedAudioSize(voidptr) u32

fn C.SDL_LockAudioDevice(voidptr)

fn C.SDL_MixAudioFormat(&byte, byte, u32, u32, int)

fn C.SDL_OpenAudioDevice(charptr, int, voidptr, voidptr, int) voidptr

fn C.SDL_PauseAudioDevice(voidptr, int)

fn C.SDL_QueueAudio(voidptr, byteptr, u32) int

fn C.SDL_UnlockAudioDevice(voidptr)

// close the connection to the `AudioDevice`
pub fn (mut device AudioDevice) close() {
	if device.ptr == 0 {
		return
	}
	C.SDL_CloseAudioDevice(device.ptr)
	device.ptr = voidptr(0)
}

// dequeue removes the provided `AudioData` track from the queue
pub fn (device &AudioDevice) dequeue(data AudioData) u32 {
	return C.SDL_DequeueAudio(device.ptr, data.ptr, data.len)
}

// empty removes all data still queued to play
pub fn (device &AudioDevice) empty() {
	C.SDL_ClearQueuedAudio(device.ptr)
}

// get_status returns the current play status of the `AudioDevice`
pub fn (device &AudioDevice) get_status() AudioStatus {
	return AudioStatus(C.SDL_GetAudioDeviceStatus(device.ptr))
}

// get_queue_size returns the amount of bytes that are queued to be played
pub fn (device &AudioDevice) get_queue_size() u32 {
	return C.SDL_GetQueuedAudioSize(device.ptr)
}

// lock_callback prevents the callback function from being run until `unlock_callback` is called
// Note: This can be called multiple times safely, but needs the same
// amount of `unlock_callback` calls to completely unlock
pub fn (device &AudioDevice) lock_callback() {
	C.SDL_LockAudioDevice(device.ptr)
}

// open opens an existing `AudioDevice` with the `desired_spec`
// and `flags` if it is not already open.
pub fn (mut device AudioDevice) open(spec AudioSpec, flags ...AudioChangeFlags) ? {
	if device.ptr > 0 {
		return
	}
	// Sum the flags
	mut flag := u32(0)
	for f in flags {
		flag = flag | u32(f)
	}
	mut desired_spec := AudioSpec{
		...spec
		callback: play
		userdata: device
	}
	mut obtained := AudioSpec{}
	ptr := C.SDL_OpenAudioDevice(device.name.str, 0, &desired_spec, &obtained, flag)
	if ptr == 0 {
		return error(serror('Unable to open audio device $device.name'))
	}
	device.ptr = ptr
	device.spec = obtained
}

pub fn (device &AudioDevice) pause() {
	C.SDL_PauseAudioDevice(device.ptr, 1)
}

// play plays the provided `data` asynchronously. It returns a copy
// of the `data` that can be used to control the play of the track
pub fn (mut device AudioDevice) play(data AudioData, volume i8) &AudioData {
	// copy := { data | copy: true, pos: 0, status: AudioStatus.playing, volume: if volume < 0 { 0 } else { volume } }
	copy := &AudioData{
		copy: true
		device: device
		len: data.len
		loop: false
		path: data.path
		pos: 0
		ptr: data.ptr
		spec: data.spec
		status: .playing
		volume: volume
	}
	ref := voidptr(copy)
	device.queue['$ref'] = copy
	return copy
}

// queue the provided `AudioData` data to play after the
// existing stream has run out
pub fn (device &AudioDevice) queue(data AudioData) ? {
	if C.SDL_QueueAudio(device.ptr, data.ptr, data.len) == 0 {
		return error(serror('Unable to queue audio data'))
	}
}

// unlock_callback unlocks the play callback to continue playing sound
pub fn (device &AudioDevice) unlock_callback() {
	C.SDL_UnlockAudioDevice(device.ptr)
}

// unpause the device to continue or start playing music
pub fn (device &AudioDevice) unpause() {
	C.SDL_PauseAudioDevice(device.ptr, 0)
}

fn play(mut device AudioDevice, stream &byte, len int) {
	unsafe { C.memset(stream, 0, len) }
	// Basic Mix Workflow:
	// 1. Loop through each file in the play queue
	// 2. Mix in the file's (buffer + pos) and len (or len - pos)
	// 3. Update the position of the buffer for the file
	// 4. If file position matches buffer len, delete from queue
	keys := device.queue.keys()
	for k in keys {
		mut data := device.queue[k]
		if data.status == .stopped || data.status == .paused {
			continue
		}
		mut remaining := data.get_remaining()
		length := if len < data.get_remaining() { u32(len) } else { data.get_remaining() }
		unsafe {
			C.SDL_MixAudioFormat(stream, data.ptr + data.pos, device.spec.format, length,
				data.volume)
		}
		data.pos += u32(length)
		remaining = data.get_remaining()
		if remaining == 0 && !data.loop {
			device.queue.delete(k)
		} else if remaining == 0 {
			data.pos = 0
		}
	}
}
