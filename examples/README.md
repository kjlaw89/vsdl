# VSDL Examples

## Window

<div align="center">
	<img src="https://github.com/kjlaw89/vsdl/blob/master/examples/window/example.png?raw=true" alt="'Window' Example" style="width: 480px;" />
</div>

This is the most basic SDL2 example. It only requires the base SDL2 library and initializes an empty window with a basic event loop.

## Audio

This is a simple SDL2 Audio example. It loads in a small `.wav` file which can be controlled using some basic keyboard events. Press Up or Down to controller volume and Left or Right to seek forward or backwards in the track. It will automatically loop.

## Controller

This is a basic demo of the GameController & Joystick functionality. This requires a game controller (e.g. XBox or Switch controller) to be plugged into the computer. The terminal will update to show the on-going input activity for the controller.

## GFX

<div align="center">
	<img src="https://github.com/kjlaw89/vsdl/blob/master/examples/gfx/example.png?raw=true" alt="'GFX' Example" style="width: 480px;" />
</div>

This example shows off loading a simple `.bmp` and using the renderer to display a background behind it.

## GL

<div align="center">
	<img src="https://github.com/kjlaw89/vsdl/blob/master/examples/gl/example.png?raw=true" alt="'GL' Example" style="width: 480px;" />
</div>

This is a basic demo of the linking OpenGL to the GFX Window to render 2D/3D. This requires the OpenGL library to be available on the system.

## Image

<div align="center">
	<img src="https://raw.githubusercontent.com/kjlaw89/vsdl/master/examples/image/example.png" alt="'Image' Example" style="width: 480px;" />
</div>

This demo showcases the SDL Image library by loading in a `.jpg` background and the V and SDL logos in a `.png` format. This requires the runtime libraries included with SDL Image to run.

On Linux it may be necessary to install the image development libraries to compile:

Ubuntu 14.04+

`sudo apt install libjpeg-dev libpng-dev libtiff-dev libwebp-dev`

## Mixer

This basic demo showcases the Mixer extension by loading in a couple of `.mid` files to play. Use the `1` and `2` keys to switch between music as well as the `up` and `down` keys to control volume.

On Linux it may be necessary to install the mixer development libraries to compile:

Ubuntu 14.04+

`sudo apt install libsdl2-mixer-dev libflac-dev libogg-dev libmpg123-dev libmodplug-dev libopus-dev libopusfile-dev libvorbis-dev`

## Messagebox

<div align="center">
	<img src="https://github.com/kjlaw89/vsdl/blob/master/examples/messagebox/example.png?raw=true" alt="'Messagebox' Example" style="width: 480px;" />
</div>

This showcases a very simple example of the Messagebox popups.

## System

This example makes a few basic calls to platform-agnostic functions to get details about the current system.

## TTF

<div align="center">
	<img src="https://github.com/kjlaw89/vsdl/blob/master/examples/ttf/example.png?raw=true" alt="'TTF' Example" style="width: 480px;" />
</div>

This demo showcase the SDL TTF library by loading in two different `.ttf` files in different sizes and styles.