module controller

fn C.SDL_IsGameController(int) bool
fn C.SDL_JoystickClose(voidptr)
fn C.SDL_JoystickCurrentPowerLevel(voidptr) int
fn C.SDL_JoystickEventState(int) int
fn C.SDL_JoystickFromInstanceID(int) voidptr
fn C.SDL_JoystickGetAttached(voidptr) bool
fn C.SDL_JoystickGetAxis(voidptr, int) i16
fn C.SDL_JoystickGetBall(voidptr, int, voidptr, voidptr) int
fn C.SDL_JoystickGetButton(voidptr, int) byte
fn C.SDL_JoystickGetDeviceGUID(int) voidptr
fn C.SDL_JoystickGetGUID(voidptr) C.SDL_JoystickGUID
fn C.SDL_JoystickGetGUIDFromString(charptr) voidptr
fn C.SDL_JoystickGetGUIDString(voidptr, charptr, int) voidptr
fn C.SDL_JoystickGetHat(voidptr, int) byte
fn C.SDL_JoystickInstanceID(voidptr) int
fn C.SDL_JoystickIsHaptic(voidptr) int
fn C.SDL_JoystickName(voidptr) charptr
fn C.SDL_JoystickNameForIndex(int) charptr
fn C.SDL_JoystickNumAxes(voidptr) int
fn C.SDL_JoystickNumBalls(voidptr) int
fn C.SDL_JoystickNumButtons(voidptr) int
fn C.SDL_JoystickNumHats(voidptr) int
fn C.SDL_JoystickOpen(int) voidptr
fn C.SDL_JoystickUpdate()
fn C.SDL_NumJoysticks() int

pub fn (mut joystick Joystick) close() {
	if joystick.ptr == 0 || joystick.parent {
		return
	}

	C.SDL_JoystickClose(joystick.ptr)
	joystick.ptr = 0
	joystick.is_open = false
}

fn (mut joystick Joystick) close_by_parent() {
	if joystick.ptr == 0 {
		return
	}

	joystick.ptr = 0
	joystick.is_open = false
}

pub fn (joystick Joystick) get_power_level() JoystickPowerLevel {
	return C.SDL_JoystickCurrentPowerLevel(joystick.ptr)
}

pub fn (joystick Joystick) get_attached() bool {
	return C.SDL_JoystickGetAttached(joystick.ptr)
}

pub fn (joystick Joystick) get_axis(axis int) i16 {
	return C.SDL_JoystickGetAxis(joystick.ptr, axis)
}

pub fn (joystick Joystick) get_ball(ball int) (int, int) {
	x := 0
	y := 0

	C.SDL_JoystickGetBall(joystick.ptr, ball, &x, &y)
	return x, y
}

pub fn (joystick Joystick) get_button(button int) bool {
	return C.SDL_JoystickGetButton(joystick.ptr, button) > 0
}

pub fn (joystick Joystick) get_hat(hat int) JoystickHatPos {
	return C.SDL_JoystickGetHat(joystick.ptr, hat)
}

pub fn get_joystick_from_id(id int) ?Joystick {
	println("Restore id $id")
	mut joystick := Joystick{ ptr: C.SDL_JoystickFromInstanceID(id) }

	if joystick.ptr == 0 {
		return error(serror("Unable to restore Joystick by id $id"))
	}

	joystick.open_get_details()
	return joystick
}

// get_joysticks returns an array of `Joystick`s that can be used
// No values will be available on a `Joystick` until `open()` is called
pub fn get_joysticks() []Joystick {
	mut joysticks := []Joystick{}
	count := get_num_joysticks()

	for i in 0..count {
		name := name_for_index(i)
		joysticks << Joystick{ 
			index: i,
			name: name,
			is_controller: C.SDL_IsGameController(i)
		}
	}

	return joysticks
}

pub fn get_num_joysticks() int {
	return C.SDL_NumJoysticks()
}

pub fn joystick_get_or_set_event_state(state int) int {
	return C.SDL_JoystickEventState(state)
}

pub fn joystick_update() {
	C.SDL_JoystickUpdate()
}

pub fn name_for_index(index int) string {
	return tos3(C.SDL_JoystickNameForIndex(index))
}

pub fn (mut joystick Joystick) open() ? {
	joystick.ptr = C.SDL_JoystickOpen(joystick.index)

	if joystick.ptr == 0 {
		return error(serror("Unable to open Joystick $joystick.index"))
	}

	joystick.open_get_details()
}

fn (mut joystick Joystick) open_get_details() {
	// name and index are set in get_joysticks()
	joystick.axes = C.SDL_JoystickNumAxes(joystick.ptr)
	joystick.balls = C.SDL_JoystickNumBalls(joystick.ptr)
	joystick.buttons = C.SDL_JoystickNumButtons(joystick.ptr)
	joystick.hats = C.SDL_JoystickNumHats(joystick.ptr)
	joystick.id = C.SDL_JoystickInstanceID(joystick.ptr)
	joystick.is_haptic = C.SDL_JoystickIsHaptic(joystick.ptr) > 0
	joystick.is_open = true
}