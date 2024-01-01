#include <iostream>
using namespace std;

class Shape {
public:
    virtual float Area() const = 0; // ���� ���� �Լ� ���� �߻� Ŭ������ ���
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    float Area() const override {
        return 3.14f * radius * radius; // ���� ���� ����
    }
};

class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    float Area() const override {
        return length * width; // ���簢���� ���� ����
    }
};

class Triangle : public Shape {
private:
    float base;
    float height;

public:
    Triangle(float b, float h) : base(b), height(h) {}

    float Area() const override {
        return 0.5f * base * height; // �ﰢ���� ���� ����
    }
};

int main() 
{
    Circle circle(5.0f);
    Rectangle rectangle(4.0f, 6.0f);
    Triangle triangle(3.0f, 7.0f);

    cout << "Circle Area: " << circle.Area() << endl;
    cout << "Rectangle Area: " << rectangle.Area() << endl;
    cout << "Triangle Area: " << triangle.Area() << endl;

    return 0;
}