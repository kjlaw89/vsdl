module events

import vsdl

const system = &EventSystem{}

fn C.SDL_PollEvent(voidptr) int

fn init() {
	C.SDL_InitSubSystem(C.SDL_INIT_EVENTS)
}

pub fn add_watcher(ch chan Event, flags ...EventCategory) {
	mut system_ref := &EventSystem(0)
	unsafe {
		system_ref = events.system
	}
	if flags.len == 0 {
		system_ref.channels['all'] << ch
		return
	}
	// Sum the flags
	mut flag := u32(0)
	for f in flags {
		flag = flag | u32(f)
	}
	if flag == u32(EventCategory.all) {
		system_ref.channels['all'] << ch
		return
	}
	mut count := 0
	list := [
		'app',
		'display',
		'window',
		'system',
		'key',
		'text',
		'mouse',
		'joystick',
		'controller',
		'touch',
		'clipboard',
		'drop',
		'audio',
		'sensor',
		'renderer',
	]
	for i, v in list {
		if (flag >> i) & 1 == 1 {
			system_ref.channels[v] << ch
			count++
		}
	}
	// If invalid or unknown value, add to all
	if count == 0 {
		system_ref.channels['all'] << ch
	}
}

pub fn create_watcher(cap int, flags ...EventCategory) chan Event {
	channel := chan Event{cap: cap}
	add_watcher(channel, ...flags)
	return channel
}

pub fn get_delay() u32 {
	return events.system.delay
}

pub fn loop() {
	for run(true) {
	}
}

// poll_events gets the most recent event from the queue and
// updates the `Event` passed in. It returns the number of
// items still in the event queue
pub fn poll_events(event &Event) int {
	return C.SDL_PollEvent(event)
}

// run the input loop to update all events
// if `delay` is set to true, loop will pause for `EventSystem.delay` time
pub fn run(delay bool) bool {
	if !events.system.running {
		return false
	}
	events.system.run(delay)
	return true
}

pub fn set_delay(delay u32) {
	mut system_ref := &EventSystem(0)
	unsafe {
		system_ref = events.system
	}
	system_ref.delay = delay
}

pub fn quit() {
	mut system_ref := &EventSystem(0)
	unsafe {
		system_ref = events.system
	}
	system_ref.running = false
	mut closed_channels := []int{}
	// Loop through each channel and close it
	for _, channels in system_ref.channels {
		for channel in channels {
			ref := voidptr(channel)
			// Can't close a channel that has already been closed
			if closed_channels.index(ref) >= 0 {
				continue
			}
			channel.close()
			closed_channels << ref
		}
	}
}

fn (system &EventSystem) run(delay bool) {
	event := &Event{}
	for poll_events(event) != 0 {
		match unsafe { event.@type } {
			.quit {
				quit()
			}
			.app_terminating, .app_lowmemory, .app_willenterbackground, .app_willenterforeground,
			.app_didenterbackground, .app_didenterforeground {
				trigger_event('app', event)
			}
			.displayevent {
				trigger_event('display', event)
			}
			.windowevent {
				trigger_event('window', event)
			}
			.syswmevent {
				trigger_event('system', event)
			}
			.keydown, .keyup, .keymapchanged {
				trigger_event('key', event)
			}
			.textediting, .textinput {
				trigger_event('text', event)
			}
			.mousemotion, .mousewheel, .mousebuttonup, .mousebuttondown {
				trigger_event('mouse', event)
			}
			.joyaxismotion, .joyballmotion, .joyhatmotion, .joybuttondown, .joybuttonup,
			.joydeviceadded, .joydeviceremoved {
				trigger_event('joystick', event)
			}
			.controlleraxismotion, .controlleraxisbuttondown, .controlleraxisbuttonup,
			.controllerdeviceadded, .controllerdeviceremapped, .controllerdeviceremoved {
				trigger_event('controller', event)
			}
			.fingerdown, .fingerup, .fingermotion, .dollargesture, .dollarrecord, .multigesture {
				trigger_event('touch', event)
			}
			.clipboardupdate {
				trigger_event('clipborad', event)
			}
			.dropfile, .droptext, .dropbegin, .dropcomplete {
				trigger_event('drop', event)
			}
			.audiodeviceadded, .audiodeviceremoved {
				trigger_event('audio', event)
			}
			.sensorupdate {
				trigger_event('sensor', event)
			}
			.render_targets_reset, .render_device_reset {
				trigger_event('renderer', event)
			}
			else {
				trigger_event('all', event)
			}
		}
	}
	if delay {
		vsdl.delay(events.system.delay)
	}
}

fn trigger_event(category string, event Event) {
	mut system_ref := &EventSystem(0)
	unsafe {
		system_ref = events.system
	}
	for v in system_ref.channels[category] {
		v.try_push(event)
	}
}
