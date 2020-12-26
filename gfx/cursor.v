module gfx

fn C.SDL_CreateCursor(voidptr, voidptr, int, int, int, int) voidptr

fn C.SDL_CreateSystemCursor(int) voidptr

fn C.SDL_FreeCursor(voidptr)

fn C.SDL_GetCursor(voidptr)

fn C.SDL_SetCursor(voidptr)

fn C.SDL_ShowCursor(int) int

pub fn create_cursor(color byte, mask byte, w int, h int, hot_x int, hot_y int) ?Cursor {
	cursor := Cursor{
		ptr: C.SDL_CreateCursor(color, mask, w, h, hot_x, hot_y)
	}
	if cursor.ptr == 0 {
		return error(serror('Unable to create cursor'))
	}
	return cursor
}

pub fn create_system_cursor(cursor_type CursorType) ?Cursor {
	cursor := Cursor{
		ptr: C.SDL_CreateSystemCursor(cursor_type)
	}
	if cursor.ptr == 0 {
		return error(serror('Unable to create system cursor'))
	}
	return cursor
}

pub fn (mut cursor Cursor) free() {
	if cursor.ptr == 0 {
		return
	}
	C.SDL_FreeCursor(cursor.ptr)
	cursor.ptr = voidptr(0)
}

pub fn get_cursor() ?Cursor {
	cursor := Cursor{
		ptr: C.SDL_GetCursor()
	}
	if cursor.ptr == 0 {
		return error(serror('Unable to get cursor'))
	}
	return cursor
}

pub fn set_cursor(cursor Cursor) {
	C.SDL_SetCursor(cursor.ptr)
}

pub fn show_cursor(mode CursorMode) CursorMode {
	if mode == .query {
		return C.SDL_ShowCursor(mode)
	}
	C.SDL_ShowCursor(mode)
	return mode
}
