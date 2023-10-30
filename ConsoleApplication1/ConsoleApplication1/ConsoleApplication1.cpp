#include <iostream>
#define SQUARE(x)   ((x)*(x)) //매크로 함수 예제 
#define ABS(x)  ((x<0)?-(x):(x)) //절대값 함수/ 삼항연산자 이용 - 모든 인수에(괄호) 사용 
//전역변수/데이터 타입 선언

//typedef struct point //typedef함수의 예제 = x와y가 만드는 점p p(x, y)
//{
//    int x;
//    int y;
//} point2D;
//double Dist(point2D p1, point2D p2); //바디가 없는 프로토타입의 함수


//class point // 필수요소 생성자 
//{
//public: // 외부접근가능
//
//    int x;
//    int y;
//    point(int x1, int y1) //기본적인 생성자 
//    {
//        x = x1; y = y1;
//    }
//    double Dist(point p);
//};
//
//double point::Dist(point p)
//{
//    int w = (x - p.x);
//    int h = (y - p.y);
//    double d = sqrt(w * w + h * h);
//    return d;
//}
class point // 필수요소 생성자 
{
public: // 외부접근가능

    int x;  //멤버변수
    int y;
    point(int x1, int y1) //기본적인 생성자 
    {
        x = x1; y = y1;
    }
    int area(point p)
    {
        int w = ABS(x - p.x);  //멤버변수를 로컬변수로 사용하다
        int h = ABS(y - p.y);
        int a = (w * h);
        return a;
    }
};


int main()
{
    printf("안녕하세요. C++의 세계에 오신것을 열렬히 환영합니다!\n\n");
    printf("2의 제곱 : %d\n", SQUARE(2));
    printf("5의 제곱 : %d\n", SQUARE(5));
    printf("1.2의 제곱 : %f\n", SQUARE(1.2));
    int x = -7;
    printf("%d의 제곱 : %d\n", x, SQUARE(x));
    
    if (x < 0)
    {
        x = -x;
    }
    else 
    {
        x = x;
    }
    printf("%d\n", x, ABS(x));

    point p1(10, 10), p2(20, 30);
    
    int a = p1.area(p2); 
    printf("두 점 p1(%d,%d), p2(%d,%d)의 면적은 %d입니다.", p1.x, p1.y, p2.x, p2.y, a);

    //double d = p1.Dist(p2);  //정구조체를 이용해서 두 점의 길이를 잇는 함수를 만든다면
    //printf("두 점 p1(%d,%d), p2(%d,%d)의 거리는 %.2f입니다.", p1.x, p1.y, p2.x, p2.y, d);

    //point2D p1, p2;  //point함수
    //p1.x = 10; p1.y = 10;
    //p2.x = 20; p2.y = 30;
    //double d = Dist(p1, p2);  //정구조체를 이용해서 두 점의 길이를 잇는 함수를 만든다면
    //printf("두 점 p1(%d,%d), p2(%d,%d)의 거리는 %.2f입니다.", p1.x, p1.y, p2.x, p2.y, d);
}
//double Dist(point2D p1, point2D p2)  // 두 점간의 거리를 구하는 함수
//{
//    int w = ABS(p1.x - p2.x);
//    int h = ABS(p1.y - p2.y);
//    int w1 = w * w;
//    int h1 = h * h;
//    double d = sqrt(w1 + h1);
//    return d;
//}

