#include <stdio.h>
#include <math.h>
struct point {
	int x;
	int y;
};
typedef struct point Point;
Point constructor(int x, int y) {
	Point p;
	p.x = x;
	p.y = y;
	return p;
}
double distance(Point* p1, Point* p2) {
	return sqrt(pow( p2->x - p1->x, 2) + pow(p2->y - p1->y, 2) );
}

int main(void) {
	int x1, y1, x2, y2;
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	Point p1 = constructor(x1, y1);
	Point p2 = constructor(x2, y2);
	printf("%f\n", distance(&p1, &p2));
}

