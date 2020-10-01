module main

import vsdl
import vsdl.events
import vsdl.gfx

#flag -lopengl32
#include <GL/GL.h>

fn C.glClear(int)
fn C.glBegin(int)
fn C.glColor3f(f32, f32, f32)
fn C.glVertex3f(f32, f32, f32)
fn C.glEnd()
fn C.glFlush()

fn main() {
	gfx.gl_load_library("")

	mut window := gfx.create_window("VSDL GL Demo", -1, -1, 640, 480, .shown, .opengl)?
	mut context := window.create_gl_context()?

	defer {
		context.destroy()
		window.destroy()
		vsdl.quit()
	}

	C.glClear(C.GL_COLOR_BUFFER_BIT)

	C.glBegin(C.GL_POLYGON)
		C.glColor3f(1, 0, 0) C.glVertex3f(-0.6, -0.75, 0.5)
		C.glColor3f(0, 1, 0) C.glVertex3f(0.6, -0.75, 0)
		C.glColor3f(0, 0, 1) C.glVertex3f(0, 0.75, 0)
	C.glEnd()

	C.glFlush()
	
	window.swap_gl()
	window.update()
	events.loop()
}