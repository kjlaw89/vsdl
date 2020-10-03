module gfx

fn C.SDL_EnclosePoints(voidptr, int, voidptr, voidptr) bool
fn C.SDL_HasIntersection(voidptr, voidptr) bool
fn C.SDL_IntersectRect(voidptr, voidptr, voidptr) bool
fn C.SDL_IntersectRectAndLine(voidptr, voidptr, voidptr, voidptr, voidptr) bool
fn C.SDL_PointInRect(voidptr, voidptr, bool) bool
fn C.UnionRect(voidptr, voidptr, voidptr)

// clip_line_segment takes in 2 x,y points and determines if it
// interects this rectangle. If it does, the clipped points are returned
pub fn (rect Rect) clip_line_segment(x1, y1, x2, y2 int) (bool, int, int, int, int) {
	x1_out := x1
	y1_out := y1
	x2_out := x2
	y2_out := y2
	result := C.SDL_IntersectRectAndLine(&rect, x1_out, y1_out, x2_out, y2_out)

	return result, x1_out, y1_out, x2_out, y2_out
}

// enclose_points calculates a minimal rectangle that encloses the provided points
pub fn enclose_points(points []Point, clip Rect) (bool, Rect) {
	new_rect := Rect{}
	result := C.SDL_EnclosePoints(points.data, points.len, &clip, &new_rect)

	return result, new_rect
}

// enclose_points calculates a minimal rectangle that encloses the provided
// points with this rectangle clipping any points outside
pub fn (rect Rect) enclose_points(points []Point) (bool, Rect) {
	return enclose_points(points, rect)
}

// eq compares this rectangle to another and returns true if they're the same
pub fn (rect Rect) eq(rect_b Rect) bool {
	return
		rect.x == rect_b.x &&
		rect.y == rect_b.y &&
		rect.w == rect_b.w &&
		rect.h == rect_b.h
}

// get_intersection tests if the provided rectangle intersects this
// rectange and if it does calculates the intersections and returns it
pub fn (rect Rect) get_intersection(rect_b Rect) (bool, Rect) {
	new_rect := Rect{}
	result := C.SDL_IntersectRect(&rect, &rect_b, &new_rect)

	return result, new_rect
}

pub fn (rect Rect) has_area() bool {
	return rect.w > 0 && rect.h > 0
}

pub fn (rect Rect) has_point(point Point) bool {
	return C.SDL_PointInRect(&point, &rect)
}

// intersects test if the provided rectangle intersects this rectangle
pub fn (rect Rect) intersects(rect_b Rect) bool {
	return C.SDL_HasIntersection(&rect, &rect_b)
}

pub fn (rect Rect) + (rect_b Rect) Rect {
	new_rect := Rect{}
	C.UnionRect(&rect, &rect_b, &new_rect)

	return new_rect
}