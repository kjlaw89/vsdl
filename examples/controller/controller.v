module main

import vsdl
import vsdl.events
import vsdl.controller

fn main() {
	controllers := controller.get_controllers()
	if controllers.len == 0 {
		println('No joysticks to open :(')
		return
	}

	mut controller := controllers[0]
	controller.open() ?

	defer {
		controller.close()
	}

	println('Controller "$controller.name" detected. See device activity below. Press "Start" or "CTRL+C" to quit')

	for events.run(true) {
		if controller.get_button(.start) {
			println('')
			println('Start was pressed. Terminating.')
			events.quit()
			continue
		}

		mut builder := []string{}

		builder << 'Left stick X: ${controller.get_axis(.leftx)}, Y: ${controller.get_axis(.lefty)}'
		builder << 'Left Trigger: ${controller.get_axis(.triggerleft)}'
		builder << 'Right stick X: ${controller.get_axis(.rightx)}, Y: ${controller.get_axis(.righty)}'
		builder << 'Right Trigger: ${controller.get_axis(.triggerright)}'

		if controller.get_button(.a) {
			builder << "'A' Button"
		}

		if controller.get_button(.b) {
			builder << "'B' Button"
		}

		if controller.get_button(.x) {
			builder << "'X' Button"
		}

		if controller.get_button(.y) {
			builder << "'Y' Button"
		}

		print('\r\33[2K' + builder.join(', '))
	}
}
