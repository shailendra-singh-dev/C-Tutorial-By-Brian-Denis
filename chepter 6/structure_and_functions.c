#include "stdio.h"
# define XMAX 1000
# define YMAX 1000

struct point make_point(int x, int y);
struct point {
	int x;
	int y;
};

struct rect {
	struct point pt1;
	struct point pt2;
};

struct rect screen;
struct point middle;

struct point make_point(int x, int y) {
	struct point temp;
	temp.x = x;
	temp.y = y;
	return temp;
}

int is_point_inside_rect(struct point p, struct rect r) {
	return (p.x > r.pt1.x && p.x < r.pt1.x) && (p.y > r.pt1.y && p.y < r.pt2.y);
}

int main() {
	screen.pt1 = make_point(0, 0);
	screen.pt2 = make_point(XMAX, YMAX);
	int x = (screen.pt1.x + screen.pt2.x) / 2;
	int y = (screen.pt1.y + screen.pt2.y) / 2;
	middle = make_point(x, y);
}
