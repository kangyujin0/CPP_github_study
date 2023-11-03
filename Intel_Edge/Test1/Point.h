#pragma once
//#include <corecrt_math.h>
//extern double sqrt(double);	//!include<iostream>이 대체
#include <iostream>	//또는 해당오류 코드를 통해 직접 해결

class Point
{
private:
	int x;
protected:
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
};
class Point3D : public Point
{
private:
	int z;
public:
	Point3D(int x = 0, int y = 0, int z = 0) : Point(x, y), z(z)
	{}
	double Dist3D(Point3D p)	//Distance 3D
	{
		int w = X() - p.X();
		int h = y - p.y;
		int d = z - p.z;
		return sqrt(w * w + h * h + d * d);
	
	}
};
