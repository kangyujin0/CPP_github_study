#pragma once
#include <iostream>
#define MIN(x,y) (((x)>(y))?(y):(x))
#define MAX(x,y) (((x)<(y))?(y):(x))

class point
{
private:    // default 접근 지시자(외부 참조 불가)

public:     //접근 지시자(외부 참조 가능)

    int x, y;// 멤버 변수 선언/ 객체(나 자신)의 좌표
    //point(int x1 = 0, int y1 = 0) : x(x1), y(y1) {}  //이니셜라이저의 예제{ 대괄호 }없이 간결하게 대입가능
    point(int x1 = 0, int y1 = 0)// 생성자 정의(외부접근필수)/ 반환형이 없다/ 멤버 변수에 대한 초기화/ 함수적 특성(default, overload) 
    {
        x = x1, y = y1;
    }
    void setp(int x1 = 0, int y1 = 0) { x = x1; y = y1; }
    double Dist(point p)  //멤버함수 : 두 점간의 거리 계산 Double 값으로 return
    {
        int w = x - p.x;
        int h = y - p.y;
        double d = sqrt(w * w + h * h);     //return d = sqrt(w * w + h * h); //실무코드예시.sqrt자체가 double형
        return d;
    }
    double Dist(point p1, point p2)  //멤버함수 : 두 점(자신을 제외한)간의 거리 계산 Double 값으로 return
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
    point p11, p22;  //클래스 변수 선언
    point LL, LR, UL, UR;
    rect(point p1, point p2)
    {
        //int xl = MIN(p1.x, p2.x);  //생성자 외부에서 정의 되는 변수 = 외부참조 불가한 로컬 변수
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
