#pragma once
#include <iostream>
#define MIN(x,y) (((x)>(y))?(y):(x))
#define MAX(x,y) (((x)<(y))?(y):(x))

class point
{
private:    // default ���� ������(�ܺ� ���� �Ұ�)

public:     //���� ������(�ܺ� ���� ����)

    int x, y;// ��� ���� ����/ ��ü(�� �ڽ�)�� ��ǥ
    //point(int x1 = 0, int y1 = 0) : x(x1), y(y1) {}  //�̴ϼȶ������� ����{ ���ȣ }���� �����ϰ� ���԰���
    point(int x1 = 0, int y1 = 0)// ������ ����(�ܺ������ʼ�)/ ��ȯ���� ����/ ��� ������ ���� �ʱ�ȭ/ �Լ��� Ư��(default, overload) 
    {
        x = x1, y = y1;
    }
    void setp(int x1 = 0, int y1 = 0) { x = x1; y = y1; }
    double Dist(point p)  //����Լ� : �� ������ �Ÿ� ��� Double ������ return
    {
        int w = x - p.x;
        int h = y - p.y;
        double d = sqrt(w * w + h * h);     //return d = sqrt(w * w + h * h); //�ǹ��ڵ忹��.sqrt��ü�� double��
        return d;
    }
    double Dist(point p1, point p2)  //����Լ� : �� ��(�ڽ��� ������)���� �Ÿ� ��� Double ������ return
    {
        int w = p1.x - p2.x;
        int h = p1.y - p2.y;
        double d = sqrt(w * w + h * h);
        return d;
    }
};

class rect
{
public:
    point p11, p22;  //Ŭ���� ���� ����
    point LL, LR, UL, UR;
    rect(point p1, point p2)
    {
        //int xl = MIN(p1.x, p2.x);  //������ �ܺο��� ���� �Ǵ� ���� = �ܺ����� �Ұ��� ���� ����
        //int xr = MAX(p1.x, p2.x);
        //int yl = MIN(p1.y, p2.y);
        //int yu = MAX(p1.y, p2.y);
        //LL = point(xl, yl);
        //LR = point(xr, yl);
        //UL = point(xl, yu);
        //UR = point(xr, yu);
        p11 = p1; p22 = p2;
    }
    point getLL()
    {
        return point(MIN(p11.x, p22.x), MIN(p11.y, p22.y));
    }
    point getLR()
    {
        return point(MAX(p11.x, p22.x), MIN(p11.y, p22.y));
    }
    point getUL()
    {
        return point(MIN(p11.x, p22.x), MAX(p11.y, p22.y));
    }
    point getUR()
    {
        return point(MAX(p11.x, p22.x), MAX(p11.y, p22.y));
    }
};
