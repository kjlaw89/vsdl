module system

pub enum RWWhence {
	start
	current
	end
}

pub enum PowerState {
	unknown
	on_battery
	no_battery
	charging
	charged
}