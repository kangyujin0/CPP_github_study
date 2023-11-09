#include "Point.h"
double Point::Dist(Point p)		// ::�̶� Ŭ���� ���ο� ���Ե��� �ǹ�
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
Point& Point::operator+(Point p) //�� �� Cur�� p�� + ������ (���ο� Point��)��ȯ
{
	Point *p1 = new Point(x + p.x, y + p.y);
	return *p1;
}
Point& Point::operator++() //��ü ���� ������ �����ε�
{
	x++; y++;
	return *this;
}
Point& Point::operator++(int) //��ü ���� ������ �����ε�
{
	x+=2; y+=2;
	return *this;
}
Point3D Point3D::SetP(Point3D p)
{
	X() = p.X(); Y() = p.Y(); z = p.z;
	return *this;
}

double Point::operator*(Point p)
{
	int w = x - p.x;
	int h = y - p.y;
	double a = w * h;
	return ABS(a);
}