module controller

pub enum ControllerAxis {
	invalid = -1
	leftx = 0
	lefty = 1
	rightx = 2
	righty = 3
	triggerleft = 4
	triggerright = 5
	max = 6
}

pub enum ControllerBind {
	@none
	button
	axis
	hat
}

pub enum ControllerButton {
	invalid = -1
	a = 0
	b = 1
	x = 2
	y = 3
	back = 4
	guide = 5
	start = 6
	leftstick = 7
	rightstick = 8
	leftshoulder = 9
	rightshoulder = 10
	dpad_up = 11
	dpad_down = 12
	dpad_left = 13
	dpad_right = 14
	max = 15
}

pub enum JoystickPowerLevel {
	unknown = -1
	empty = 0
	low = 1
	medium = 2
	full = 3
	wired = 4
	max = 5
}

pub enum JoystickHatPos {
	centered = 0x00
	up = 0x01
	right = 0x02
	rightup = 0x03
	down = 0x04
	rightdown = 0x06
	left = 0x08
	leftup = 0x09
	leftdown = 0x0C
}
