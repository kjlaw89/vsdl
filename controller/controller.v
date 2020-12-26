module controller

fn C.SDL_GameControllerAddMapping(charptr) int

fn C.SDL_GameControllerAddMappingsFromFile(charptr) int

fn C.SDL_GameControllerAddMappingsFromRW(voidptr, int) int

fn C.SDL_GameControllerClose(voidptr)

fn C.SDL_GameControllerEventState(int) int

// fn C.SDL_GameControllerFromInstanceID(int) voidptr
fn C.SDL_GameControllerGetAttached(voidptr) bool

fn C.SDL_GameControllerGetAxis(voidptr, int) i16

fn C.SDL_GameControllerGetBindForAxis(voidptr, int) ControllerButtonBind

fn C.SDL_GameControllerGetBindForButton(voidptr, int) ControllerButtonBind

fn C.SDL_GameControllerGetButton(voidptr, int) byte

fn C.SDL_GameControllerGetJoystick(voidptr) voidptr

fn C.SDL_GameControllerGetStringForAxis(int) charptr

fn C.SDL_GameControllerGetStringForButton(int) charptr

fn C.SDL_GameControllerMapping(voidptr) charptr

fn C.SDL_GameControllerMappingForGUID(voidptr) charptr

fn C.SDL_GameControllerName(voidptr) charptr

fn C.SDL_GameControllerNameForIndex(int) charptr

fn C.SDL_GameControllerOpen(int) voidptr

fn C.SDL_GameControllerUpdate()

fn init() {
	C.SDL_InitSubSystem(C.SDL_INIT_GAMECONTROLLER)
}

fn serror(text string) string {
	msg := tos3(C.SDL_GetError())
	return '$text: $msg'
}

pub fn add_mapping(data string) int {
	return C.SDL_GameControllerAddMapping(data.str)
}

pub fn add_mappings_from_file(path string) ? {
	if C.SDL_GameControllerAddMappingsFromFile(path.str) == -1 {
		return error(serror('Unable to add mappings for $path'))
	}
}

pub fn (mut controller Controller) close() {
	if controller.ptr == 0 {
		return
	}
	C.SDL_GameControllerClose(controller.ptr)
	controller.ptr = voidptr(0)
	controller.is_open = false
	controller.joystick.close_by_parent()
}

pub fn controller_get_or_set_event_state(state int) int {
	return C.SDL_GameControllerEventState(state)
}

pub fn controller_update() {
	C.SDL_GameControllerUpdate()
}

pub fn get_controllers() []Controller {
	mut controllers := []Controller{}
	mut joysticks := get_joysticks().filter(it.is_controller)
	for joystick in joysticks {
		controllers << Controller{
			index: joystick.index
			name: joystick.name
		}
	}
	return controllers
}

pub fn (controller Controller) get_mapping() string {
	return tos3(C.SDL_GameControllerMapping(controller.ptr))
}

pub fn (controller Controller) get_attached() bool {
	return C.SDL_GameControllerGetAttached(controller.ptr)
}

pub fn (controller Controller) get_axis(axis ControllerAxis) i16 {
	return C.SDL_GameControllerGetAxis(controller.ptr, axis)
}

pub fn (controller Controller) get_axis_binding(axis ControllerAxis) ControllerButtonBind {
	return C.SDL_GameControllerGetBindForAxis(controller.ptr, axis)
}

pub fn (controller Controller) get_button_binding(button ControllerButton) ControllerButtonBind {
	return C.SDL_GameControllerGetBindForButton(controller.ptr, button)
}

pub fn (controller Controller) get_button(button ControllerButton) bool {
	return C.SDL_GameControllerGetButton(controller.ptr, button) > 0
}

pub fn (controller Controller) get_joystick() ?Joystick {
	return controller.joystick
}

pub fn (controller Controller) get_power_level() JoystickPowerLevel {
	return controller.joystick.get_power_level()
}

pub fn controller_get_name_for_index(index int) string {
	return tos3(C.SDL_GameControllerNameForIndex(index))
}

pub fn (mut controller Controller) open() ? {
	controller.ptr = C.SDL_GameControllerOpen(controller.index)
	if controller.ptr == 0 {
		return error(serror('Unable to open Controller $controller.index'))
	}
	controller.is_open = true
	controller.joystick = Joystick{
		ptr: C.SDL_GameControllerGetJoystick(controller.ptr)
	}
	controller.joystick.is_controller = true
	controller.joystick.is_open = true
	controller.joystick.name = controller.name
	controller.joystick.parent = true
	controller.joystick.open_get_details()
}
