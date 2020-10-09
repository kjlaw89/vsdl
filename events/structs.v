module events

struct EventSystem {
mut:
	channels     map[string][]chan Event
	delay        u32  = 16
	running      bool = true
}

struct Keysym {
pub:
	code     ScanCode
	key      KeyCode
	mod      u16
	unused   u32
}

pub union Event {
pub:
	@type    EventType
	common   CommonEvent
	display  DisplayEvent
	window   WindowEvent
	key      KeyboardEvent
	edit     TextEditingEvent
	text     TextInputEvent
	motion   MouseMotionEvent
	button   MouseButtonEvent
	wheel    MouseWheelEvent
	jaxis    JoyAxisEvent
	jball    JoyBallEvent
	jhat     JoyHatEvent
	jbutton  JoyButtonEvent
	jdevice  JoyDeviceEvent
	caxis    ControllerAxisEvent
	cbutton  ControllerButtonEvent
	cdevice  ControllerDeviceEvent
	adevice  AudioDeviceEvent
	sensor   SensorEvent
	quit     QuitEvent
	user     UserEvent
	syswm    SysWMEvent
	tfinger  TouchFingerEvent
	mgesture MultiGestureEvent
	dgesture DollarGestureEvent
	drop     DropEvent
	padding_  [56]byte
}

struct CommonEvent {
pub:
	@type     EventType
	timestamp u32
}

struct DisplayEvent {
pub:
	@type     EventType
	timestamp u32
	display   u32
	event     byte
	padding1  byte
	padding2  byte
	padding3  byte
	data1     int
}

struct WindowEvent {
pub:
	@type     EventType
	timestamp u32
	window_id u32
	event     byte
	padding1  byte
	padding2  byte
	padding3  byte
	data1     int
	data2     int
}

struct KeyboardEvent {
pub:
	@type     EventType
	timestamp u32
	window_id u32
	state     byte
	repeat    byte
	padding2  byte
	padding3  byte
	input     Keysym
}

struct TextEditingEvent {
pub:
	@type     EventType
	timestamp u32
	window_id u32
	text      [32]i8
	start     int
	length    int
}

struct TextInputEvent {
pub:
	@type     EventType
	timestamp u32
	window_id u32
	text      [32]i8
}

struct MouseMotionEvent {
pub:
	@type     EventType
	timestamp u32
	window_id u32
	which     u32
	state     u32
	x         int
	y         int
	xrel      int
	yrel      int
}

struct MouseButtonEvent {
pub:
	@type     EventType
	timestamp u32
	window_id u32
	which     u32
	button    byte
	state     byte
	clicks    byte
	padding1  byte
	x         int
	y         int
}

struct MouseWheelEvent {
pub:
	@type     EventType
	timestamp u32
	window_id u32
	which     u32
	x         int
	y         int
	direction u32
}

struct JoyAxisEvent {
pub:
	@type     EventType
	timestamp u32
	which     int
	axis      byte
	padding1  byte
	padding2  byte
	padding3  byte
	value     i16
	padding4  u16
}

struct JoyBallEvent {
pub:
	@type     EventType
	timestamp u32
	which     int
	ball      byte
	padding1  byte
	padding2  byte
	padding3  byte
	xrel      i16
	yrel      i16
}

struct JoyHatEvent {
pub:
	@type     EventType
	timestamp u32
	which     int
	hat       byte
	value     byte
	padding1  byte
	padding2  byte
}

struct JoyButtonEvent {
pub:
	@type     EventType
	timestamp u32
	which     int
	button    byte
	state     byte
	padding1  byte
	padding2  byte
}

struct JoyDeviceEvent {
pub:
	@type     EventType
	timestamp u32
	which     int
}

struct ControllerAxisEvent {
pub:
	@type     EventType
	timestamp u32
	which     int
	axis      byte
	padding1  byte
	padding2  byte
	padding3  byte
	value     i16
	padding4  u16
}

struct ControllerButtonEvent {
pub:
	@type     EventType
	timestamp u32
	which     int
	button    byte
	state     byte
	padding1  byte
	padding2  byte
}

struct ControllerDeviceEvent {
pub:
	@type     EventType
	timestamp u32
	which     int
}

struct AudioDeviceEvent {
pub:
	@type     EventType
	timestamp u32
	which     u32
	iscapture byte
	padding1  byte
	padding2  byte
	padding3  byte
}

struct TouchFingerEvent {
pub:
	@type     EventType
	timestamp u32
	touch_id  i64
	finger_id i64
	x         f32
	y         f32
	dx        f32
	dy        f32
	pressure  f32
	window_id u32
}

struct MultiGestureEvent {
pub:
	@type       EventType
	timestamp   u32
	touch_id    i64
	d_theta     f32
	d_dist      f32
	x           f32
	y           f32
	num_fingers u16
	padding     u16
}

struct DollarGestureEvent {
pub:
	@type       EventType
	timestamp   u32
	touch_id    i64
	gesture_id  i64
	num_fingers u32
	error       f32
	x           f32
	y           f32
}

struct DropEvent {
pub:
	@type     EventType
	timestamp u32
	file      charptr
	window_id u32
}

struct SensorEvent {
pub:
	@type     EventType
	timestamp u32
	which     int
	data      [6]f32
}

struct QuitEvent {
pub:
	@type     EventType
	timestamp u32
}

struct OSEvent {
pub:
	@type     EventType
	timestamp u32
}

struct UserEvent {
pub:
	@type     EventType
	timestamp u32
	window_id u32
	code      int
	data1     voidptr
	data2     voidptr
}

struct SysWMEvent {
pub:
	@type     EventType
	timestamp u32
	msg       voidptr
}