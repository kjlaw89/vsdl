module mixer

pub type ChannelFinishedCallback = fn (int)

fn C.Mix_AllocateChannels(int) int

fn C.Mix_ChannelFinished(ChannelFinishedCallback)

fn C.Mix_ExpireChannel(int, int) int

fn C.Mix_FadingChannel(u32) int

fn C.Mix_FadeInChannel(int, voidptr, int, int) int

fn C.Mix_FadeInChannelTimed(int, voidptr, int, int, int) int

fn C.Mix_FadeOutChannel(int, int) int

fn C.Mix_GetChunk(int) voidptr

fn C.Mix_HaltChannel(int) int

fn C.Mix_Pause(int)

fn C.Mix_Paused(int) int

fn C.Mix_Playing(int) int

fn C.Mix_PlayChannel(int, voidptr, int) int

fn C.Mix_PlayChannelTimed(int, voidptr, int, int) int

fn C.Mix_Resume(int)

fn C.Mix_Volume(int, int) int

fn C.Mix_VolumeChunk(voidptr, int) int

pub fn channel_allocate(count int) int {
	return C.Mix_AllocateChannels(count)
}

pub fn channel_done(callback ChannelFinishedCallback) {
	C.Mix_ChannelFinished(callback)
}

// channel_expire expires the channel in the specified amount of time
pub fn channel_expire(channel int, ms int) int {
	return C.Mix_ExpireChannel(channel, ms)
}

// channel_fading returns back the fading status of the provided channel
pub fn channel_fading(channel u32) Fading {
	return Fading(C.Mix_FadingChannel(channel))
}

// channel_fade_in plays the provided `Chunk` on a channel (-1 is next free)
// The returned value is the channel the chunk is being played on
pub fn channel_fade_in(channel int, chunk &Chunk, loops int, ms int) int {
	return C.Mix_FadeInChannel(channel, chunk, loops, ms)
}

// fade_in_timed plays the provided `Chunk` on a channel (-1 is next free)
// `time` is specified in miliseconds
// The returned value is the channel the chunk is being played on
pub fn channel_fade_in_timed(channel int, chunk &Chunk, loops int, ms int, time int) int {
	return C.Mix_FadeInChannelTimed(channel, chunk, loops, ms, time)
}

// channel_fade_out fades out the provided channel
pub fn channel_fade_out(channel int, ms int) int {
	return C.Mix_FadeOutChannel(channel, ms)
}

// channel_get_chunk gets the latest chunk played on this channel if available
pub fn channel_get_chunk(channel int) ?&Chunk {
	chunk := C.Mix_GetChunk(channel)
	if chunk == 0 {
		return error(serror("Unable to get channel's chunk"))
	}
	return chunk
}

// channel_halt stops play on the specified channel
pub fn channel_halt(channel int) int {
	return C.Mix_HaltChannel(channel)
}

// channel_pause pauses the provided channel (-1 pauses all channels)
pub fn channel_pause(channel int) {
	C.Mix_Pause(channel)
}

// channel_paused returns back if the provided channel is paused
// If -1 is passed in the number of channels playing is returned
pub fn channel_paused(channel int) int {
	return C.Mix_Paused(channel)
}

// channel_play plays the provided `Chunk` on a channel (-1 is next free)
// The returned value is the channel the chunk is being played on
pub fn channel_play(channel int, chunk &Chunk, loops int) int {
	return C.Mix_PlayChannel(channel, chunk, loops)
}

// channel_playing returns back if the provided channel is playing
// If -1 is passed in the number of channels playing is returned
pub fn channel_playing(channel int) int {
	return C.Mix_Playing(channel)
}

// channel_play_timed plays the provided `Chunk` on a channel (-1 is next free)
// `time` is specified in miliseconds
// The returned value is the channel the chunk is being played on
pub fn channel_play_timed(channel int, chunk &Chunk, loops int, ms int) int {
	return C.Mix_PlayChannelTimed(channel, chunk, loops, ms)
}

// channel_resume resumes playback on provided channel (-1 resumes all)
pub fn channel_resume(channel int) {
	C.Mix_Resume(channel)
}

// channel_volume sets the volume for the specied channel
// If channel is -1, volume is applied to all channels
// If channel and volume are -1, average volume is returned
pub fn channel_volume(index int, volume byte) int {
	return C.Mix_Volume(index, volume)
}
