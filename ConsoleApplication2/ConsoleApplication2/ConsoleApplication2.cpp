#include <iostream>
#include "Point.h"
#define MIN(x,y) (((x)>(y))?(y):(x))
#define MAX(x,y) (((x)<(y))?(y):(x))



void printp(point p)    
{
    printf("point(%d, %d)\n, p.x, p.y");
}

void swap_v(int a, int b) //call-by-value
{
    int t(a);
    printf("[swap]초기값 a = %d  b = %d\n", a, b);
    a = b; b = t;
    printf("[swap]결과값 a = %d  b = %d\n", a, b);
}

void swap_p(int *a, int *b) //call-by-reference
{
    int t(*a);
    printf("[swap]초기값 a = %d  b = %d\n", *a, *b);
    *a = *b; *b = t;
    printf("[swap]결과값 a = %d  b = %d\n", *a, *b);
}

void swap_r(int &a, int &b) //call-by-reference (usiing ref, variables) 호출변수와 동기화
{
    int t(a);
    printf("[swap_r]초기값 a = %d  b = %d\n", a, b);
    a = b; b = t;
    printf("[swap_r]결과값 a = %d  b = %d\n", a, b);
}

int main()
{
    point arr[3];   // 객체 배열 : 3개의 point class 객체가 default 초기화 됨
    arr[0].setp(10, 10); printp(arr[0]);
    arr[1].setp(20, 30); printp(arr[1]);
    arr[2].setp(40, 60); printp(arr[2]);
    printf("class point 객체 크기 : %d\n", sizeof(arr));
    
    point* parr[3];    //point 객체 포인터(*) 배열 : 객체화 되어 있지 않음
    printf("class point 객체 포인터 배열 크기 : %d\n", sizeof(parr));
    parr[0] = new point(10, 10); printp(*parr[0]);
    parr[1] = new point(20, 30); printp(*parr[1]);
    parr[2] = new point(40, 60); printp(*parr[2]);

    //point p1, p2(10, 10), p3(20, 30), p4;   //객체(실체가 있다 = 초기화된 멤버 변수가 있다)
    //p4 = p3;
    //double d = p1.Dist(p2);  //기준이 되는 p1, p1에서 p2까지의 거리
    //double d1 = p2.Dist(p3);
    //double d2 = p1.Dist(p2, p3);  //p1은 함수만 이용하기 위해서 사용하는 객체
    //printp(p1);
    //printp(p2);
    //printp(p3);
    //printp(p4);
    //printf("점간의 거리 계산 : \n d(p1, p2) = %.2f    d1(p2, p3) = %.2f    d2(p2, p3) = %.2f\n", d, d1, d2);

    //rect r(p2, p3);
    //printf("두 점 \n");
    //printp(p2);
    //printp(p3);
    //printf("에 의해 정의된 사각형의 꼭지점의 좌표는\n");
    //printp(r.getLL());
    //printp(r.getLR());
    //printp(r.getUL());
    //printp(r.getUR());

    //int a, b;   //a(10), b(20); = c++의 새로운 대입문
    //a = 10; b = 20;
    //printf("초기값 a = %d  b = %d\n", a, b);
    //swap_r(a, b);
    //printf("결과값 a = %d  b = %d\n", a, b);
    //int n = 1234, n1 = 1000;
    //int& m = n; //n이라는 변수의 별칭m
    //printf("[레퍼런스 변수 테스트] n = %d, m = %d\n", n, m);
    //m = n1;
    //m = 5678;
    //printf("[레퍼런스 변수 테스트] n = %d, m = %d\n", n, m);
}