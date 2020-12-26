# VSDL Events

VSDL implements support for the Events subsystem provided by SDL2. There are two methods of implementing event handling in your application.

## Standard Event Handling

This is the typical reference-loop used in most SDL2 projects. This process is synchronous and handles events as they come in with no filtering.

```v
mut run := true
event := &events.Event{}

for run {
	for events.poll_events(event) != 0 {
		match event.@type {
			.quit { run = false }
			.keydown {
				println("Key: ${event.key.input.key}")
			}
			else  {}
		}
	}

	vsdl.delay(16)
}
```

## Channel-based Events

Channels are a feature available in `V` and `Go`, typically used for communication between threads or `go` functions.

```v
input_chan := events.create_watcher(100, .key, .mouse)

for events.run() {
	select {
		event := <-input_chan {
			println("Event type: ${event.@type}")
		}
		else {
			// no events
		}
	}
}
```

It is also possible to declare the channel and then monitor it in a separate `go` function.

```v
module main

import vsdl
import vsdl.events
import vsdl.gfx

fn main() {
	mut window := gfx.create_window("Simple VSDL Window", -1, -1, 640, 480, .shown)?
	surface := window.get_surface()?
	surface.fill_rect(surface.get_rect(), { r: 0, g: 0, b: 255 })

	defer {
		surface.free()
		window.destroy()
		vsdl.quit()
	}
	
	window.update()

	input_chan := events.create_watcher(100, .key, .mouse)
	go handle_input(input_chan)

	events.loop()
}

fn handle_input(input chan events.Event) {
	for {
		select {
			event := <-input {
				println("Event type: ${event.@type}")
			}
		}
	}
}
```

### Event Loop

In the above examples there are two kinds of loops:

1. `for events.run()` loop
2. `events.loop()`

`events.run()` needs to be called to trigger the polling for the events. As long as `events.quit()` is not called it will always return true. `events.loop()` internally calls `for events.run()` and doesn't return until `events.quit()` is called (which is done internally when the Window is closed).

**Note**: If using `events.run()` with `select`, the `select` *must* have an `else {}` or it will block until an event is received (won't be received if `events.run()` cannot be called).

### Categories

When using channel-based events, it's possible to specify the categories to subscribe to. These are the available categories:

```
all
app
display
window
system
key
text
mouse
joystick
controller
touch
clipboard
drop
audio
sensor
renderer
```

As with all references throughout VSDL - when calling a function that allows you to pass in flags you can provide each flag at the end:

Example: `create_watcher(10, .display, .renderer,  window)`