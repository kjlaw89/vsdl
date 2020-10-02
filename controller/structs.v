module controller

pub struct Controller {
mut:
	joystick     Joystick
	ptr          voidptr
pub mut:
	index        int
	is_open      bool
	name         string
}

pub struct C.SDL_GameControllerButtonBind {
mut:
	bind_type    int
	button       int
	axis         int
	hat          int
	hat_mask     int
}

pub type ControllerButtonBind = C.SDL_GameControllerButtonBind

struct C._SDL_Joystick

pub struct Joystick {
mut:
	ptr           voidptr
	parent        bool
pub mut:
	axes          int
	buttons       int
	balls         int
	hats          int
	id            int
	index         int
	is_controller bool
	is_haptic     bool
	is_open       bool
	name          string
}

pub struct JoystickGUID {
mut:
	data    [16]byte
}