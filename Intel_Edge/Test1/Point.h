#pragma once
//#include <corecrt_math.h>
//extern double sqrt(double);	//!include<iostream>이 대체
#include <iostream>	//또는 해당오류 코드를 통해 직접 해결
#define ABS(x)  (((x)<0)?(-(x)):(x));

class Point
{
private:
	int x;
	int y;

public:

	Point(int x1 = 0, int y1 = 0) : x(x1), y(y1)
	{
	
	}
	Point& SetP(Point p);		//Self-Reference
	Point& SetP(int x, int y);
	double Dist(Point p);		//Distance
	void viewP(const char *s = NULL);	//New Current point
	Point& MoveP(int x, int y);	//Move Point position
	int& X() { return x; };
	int& Y() { return y; };
	Point& operator+(Point p);
	Point& operator++(); //선행 연산자
	Point& operator++(int); //후행 연산자
	double operator*(Point p); //두 점이 이루는 사각형의 넓이 (double)
};
class Point3D : public Point
{
private:
	int z;
public:
	Point3D(int x = 0, int y = 0, int z = 0) : Point(x, y), z(z)
	{}
	Point3D SetP(Point3D p);
	double Dist3D(Point3D p)	//Distance 3D
	{
		int w = X() - p.X();
		int h = Y() - p.Y();
		int d = z - p.z;
		return sqrt(w * w + h * h + d * d);
	
	}
};
