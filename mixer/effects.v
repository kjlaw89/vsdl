module mixer

pub type EffectCallback = fn (int, voidptr, int, voidptr)

pub type EffectDoneCallback = fn (int, voidptr)

pub type PostMixCallback = fn (voidptr, voidptr, int)

fn C.Mix_RegisterEffect(int, EffectCallback, EffectDoneCallback, voidptr) int

fn C.Mix_SetPanning(int, byte, byte) int

fn C.Mix_SetPosition(int, i16, byte) int

fn C.Mix_SetPostMix(PostMixCallback, voidptr)

fn C.Mix_SetReverseStereo(int, bool) int

fn C.Mix_UnregisterEffect(int, EffectCallback) int

fn C.Mix_UnregisterAllEffects(int) int

// register_effect registers an effect callback to the provided channel
pub fn register_effect(channel int, effect_cb EffectCallback, effect_done_cb EffectDoneCallback, data voidptr) int {
	return C.Mix_RegisterEffect(channel, effect_cb, effect_done_cb, data)
}

// channel_set_panning sets the panning for the channel
pub fn channel_set_panning(channel int, left byte, right byte) int {
	return C.Mix_SetPanning(channel, left, right)
}

// channel_set_position sets the 'position' of the sound based on the 'camera'
// being in the center. Angle is 0-360, distance is 0-255
pub fn channel_set_position(channel int, angle i16, distance byte) int {
	return C.Mix_SetPosition(channel, angle, distance)
}

// channel_set_stereo_reverse flips the left and right audio channels for stereo
pub fn channel_set_stereo_reverse(channel int, flip bool) int {
	return C.Mix_SetReverseStereo(channel, flip)
}

// set_post_mix sets a callback for post mix
pub fn set_post_mix(callback PostMixCallback, data voidptr) {
	C.Mix_SetPostMix(callback, data)
}

// unregister_effect unregisters the provided callback from the channel if it is set
pub fn unregister_effect(channel int, effect_cb EffectCallback) int {
	return C.Mix_UnregisterEffect(channel, effect_cb)
}

// unregister_all_effects unregisters all event callbacks from the provided channel
pub fn unregister_all_effects(channel int) int {
	return C.Mix_UnregisterAllEffects(channel)
}
