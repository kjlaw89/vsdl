module main

import vsdl
import vsdl.system

fn main() {
	state, secs, percentage := system.get_power_state()

	println("Platform: ${system.get_platform()}")
	println("CPU Count: ${system.get_cpu_count()}")
	println("CPU Cache Lines: ${system.get_cpu_cache_line_size()}")
	println("Power State: $state, $secs, $percentage%")
	println("RAM: ${f32(system.get_memory()) / 1024.0}")
	println("SSE4.2 Support: ${system.has_sse42()}")
}