module mixer

fn C.Mix_AllocateChannels(int) int
fn C.Mix_FadeInChannel(int, voidptr, int, int) int
fn C.Mix_FadeInChannelTimed(int, voidptr, int, int, int) int
fn C.Mix_PlayChannel(int, voidptr, int) int
fn C.Mix_PlayChannelTimed(int, voidptr, int, int) int
fn C.Mix_Pause(int)
fn C.Mix_Resume(int)
fn C.Mix_Volume(int) int

pub fn channels_allocate(count int) int {
	return C.Mix_AllocateChannels(count)
}

// channel_fade_in plays the provided `Chunk` on a channel (-1 is next free)
// The returned value is the channel the chunk is being played on
pub fn channel_fade_in(channel int, chunk &Chunk, loops, ms int) int {
	return C.Mix_FadeInChannel(channel, chunk, loops, ms)
}

// fade_in_timed plays the provided `Chunk` on a channel (-1 is next free)
// `time` is specified in miliseconds
// The returned value is the channel the chunk is being played on
pub fn channel_fade_in_timed(channel int, chunk &Chunk, loops, ms, time int) int {
	return C.Mix_FadeInChannelTimed(channel, chunk, loops, ms, time)
}

// channel_pause pauses the provided channel (-1 pauses all channels)
pub fn channel_pause(channel int) {
	C.Mix_Pause(channel)
}

// channel_play plays the provided `Chunk` on a channel (-1 is next free)
// The returned value is the channel the chunk is being played on
pub fn channel_play(channel int, chunk &Chunk, loops int) int {
	return C.Mix_PlayChannel(channel, chunk, loops)
}

// channel_play_timed plays the provided `Chunk` on a channel (-1 is next free)
// `time` is specified in miliseconds
// The returned value is the channel the chunk is being played on
pub fn channel_play_timed(channel int, chunk &Chunk, loops, time int) int {
	return C.Mix_PlayChannelTimed(channel, chunk, loops, time)
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