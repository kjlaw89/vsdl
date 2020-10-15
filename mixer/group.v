module mixer

fn C.Mix_FadeOutGroup(int, int) int

fn C.Mix_GroupAvailable(int) int

fn C.Mix_GroupChannel(int, int) int

fn C.Mix_GroupChannels(int, int, int) int

fn C.Mix_GroupCount(int) int

fn C.Mix_GroupNewer(int) int

fn C.Mix_GroupOldest(int) int

fn C.Mix_HaltGroup(int) int

fn C.Mix_ReserveChannels(int) int

// group assign a group id to a channel
pub fn group(index int, tag int) int {
	return C.Mix_GroupChannel(index, tag)
}

// groups assign a group id to a sequence of channels
pub fn groups(from int, to int, tag int) int {
	return C.Mix_GroupChannels(from, to, tag)
}

// group_available returns the first available (not playing) channel in the group
pub fn group_available(tag int) int {
	return C.Mix_GroupAvailable(tag)
}

// group_count returns back the amount of channels assigned to the current tag
pub fn group_count(tag int) int {
	return C.Mix_GroupCount(tag)
}

// group_fade fades out playback on all channesl in group
pub fn group_fade(tag int, time int) int {
	return C.Mix_FadeOutGroup(tag, time)
}

// group_halt stops playback on all channels in group
pub fn group_halt(tag int) int {
	return C.Mix_HaltGroup(tag)
}

// group_newer returns the channel that has played something most recently
pub fn group_newer(tag int) int {
	return C.Mix_GroupNewer(tag)
}

// group_oldest returns the channel that hasn't played recently
pub fn group_oldest(tag int) int {
	return C.Mix_GroupOldest(tag)
}

// group_reserve reserves the specified `num` of channels from playing
// when -1 is passed in. If 0 is passed, all channels are reserved
pub fn group_reserve(num int) int {
	return C.Mix_ReserveChannels(num)
}
