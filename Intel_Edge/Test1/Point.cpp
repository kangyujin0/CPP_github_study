#include "Point.h"
double Point::Dist(Point p)
{
	int w = x - p.x;
	int h = y - p.y;
	return sqrt(w * w + h * h);
}
Point& Point::SetP(Point p)
{
	x = p.x; y = p.y; 
	return *this;
}
Point& Point::SetP(int x, int y)
{
	this->x = x; this->y = y; 
	return *this;
}
void Point::viewP(const char* s)
{
	printf("%s(%d,%d)\n", s, x, y);
}
Point& Point::MoveP(int dx, int dy)
{
	this->x += dx; this->y += dy;
	return *this;
}