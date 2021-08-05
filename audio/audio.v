module audio

fn C.SDL_AudioInit(&char) int

fn C.SDL_GetAudioDeviceName(int, int) &char

fn C.SDL_GetAudioDriver(int) &char

fn C.SDL_GetNumAudioDevices(int) int

fn C.SDL_GetNumAudioDrivers() int

fn C.SDL_AudioQuit()

fn init() {
	C.SDL_InitSubSystem(C.SDL_INIT_AUDIO)
	drivers := get_drivers()
	for i := 0; i < drivers.len; i++ {
		if C.SDL_AudioInit(drivers[i].str) < 0 {
			println('Failed it initialize driver ${drivers[i]}')
			continue
		}
		break
	}
}

// initialize_driver attempts to initialize a specific driver
// Note: This should not be necessary
pub fn initialize_driver(driver string) ? {
	if C.SDL_AudioInit(driver.str) == 0 {
		return error(serror('Failed it initialize driver $driver'))
	}
}

// get_devices returns a list of `AudioDevice`s that can be
// opened to play music or sound through
pub fn get_devices() []AudioDevice {
	mut devices := []AudioDevice{}
	count := get_device_count()
	for i := 0; i < count; i++ {
		devices << AudioDevice{
			index: i
			name: get_device_name(i)
		}
	}
	return devices
}

// get_drivers returns a list of drivers that are
// availble with this build of SDL
pub fn get_drivers() []string {
	mut drivers := []string{}
	count := C.SDL_GetNumAudioDrivers()
	for i := 0; i < count; i++ {
		drivers << unsafe { tos3(C.SDL_GetAudioDriver(i)) }
	}
	return drivers
}

// get_device_count returns the number of devices that are available
pub fn get_device_count() int {
	return C.SDL_GetNumAudioDevices(0)
}

// get_device_name returns the name of the device at the provided `index`
pub fn get_device_name(index int) string {
	return unsafe { tos3(C.SDL_GetAudioDeviceName(index, 0)) }
}

// quit shuts down the SDL Audio engine
pub fn quit() {
	C.SDL_AudioQuit()
}

fn serror(text string) string {
	msg := unsafe { tos3(C.SDL_GetError()) }
	return '$text: $msg'
}
