<div align="center">
	<h1>VSDL</h1>
</div>

VSDL is a work-in-progress V wrapper for the C-based [SDL library](https://www.libsdl.org). The aim of this library is to provide a thorough implementation of SDL2 in V. The implementation is faithful to the original API but takes some liberties to provide a native "V" feel.

<div align="center">
	<img src="https://raw.githubusercontent.com/kjlaw89/vsdl/master/sample.png" alt="'Image' Example" style="width: 480px;" />
</div>

## Features

- [x] gfx
  - [x] window management
  - [x] renderer
  - [x] texture
  - [x] surface
  - [x] rect
  - [x] gl hook
  - [x] vulkan hook (untested)
  - [x] pixel formats
- [ ] events
  - [x] basic event handling
  - [ ] subscribed events
- [x] input
  - [x] keyboard
  - [x] mouse
- [x] controller
  - [x] joysticks
  - [x] game controllers
- [ ] sensors
- [ ] haptics
- [x] audio
- [x] ttf
- [x] mixer
- [x] image
  - [x] load
  - [x] file type
- [ ] network
- [ ] concurrency/threading
- [x] RWops

## Example

```v
module main

import vsdl
import vsdl.events
import vsdl.gfx

fn main() {
	mut window := gfx.create_window("Simple VSDL Window", -1, -1, 640, 480, .shown)?
	surface := window.get_surface()?
	surface.fill(r: 255, g: 255, b: 255)

	defer {
		surface.free()
		window.destroy()
		vsdl.quit()
	}
	
	window.update()
	events.loop()
}
```

See the examples folder for more examples. Run any `.v` files with `v run [file]`.

## Requirements

The SDL2 headers come pre-included with this repo. To run the only thing needed are the runtime binaries.

On **Ubuntu 14.04 and above**, run:

`apt install libsdl2{,-image,-mixer,-ttf}-dev zlib1g-dev libfreetype6-dev`

On **MacOS** install SDL2 via Homebrew:

`brew install sdl2{,_image,_mixer,_ttf}`

On **Windows**,

1. Download the runtime binaries from SDL2
  * [SDL2 Runtime Binaries](https://libsdl.org/download-2.0.php)
  * [SDL2 Image Runtime Binaries](https://www.libsdl.org/projects/SDL_image/) (optional)
  * [SDL2 Mixer Runtime Binaries](https://www.libsdl.org/projects/SDL_mixer/) (optional)
  * [SDL2 TTF Runtime Binaries](https://www.libsdl.org/projects/SDL_ttf/) (optional)
2. Extract the binaries to the folder where your executable resides

### Notes about dependencies

This repo comes with a copy of the headers for the version of SDL2 that it was developed against (2.0.12), but does not ship with the runtime libraries. It is *not* necessary to get the Image, Mixer or TTF library runtimes if you do not plan to use them in your application.

By default VSDL only initializes the subsystems that are imported. For example, importing just `vsdl` only initializes the main SDL2 system, giving you limited access to SDL2 base functionality. The `video` or `audio` subsystems are only initialized when `vsdl.gfx` or `vsdl.audio` are imported. This allows you to only activate the subsystems that are important to your project.

If an extension library is loaded (`vsdl.image`, `vsdl.mixer`, `vsdl.ttf`), the required runtime binaries must be installed or provided along with the build.

## Contributing / Support

This project was developed as a way of improving my understanding of V & C. I will not be providing active support for the project, but I'll happily accept any pull requests. Use at your own discretion! 
