#include <iostream>
using namespace std;
class shape
{
protected:
    float x;

public:
    shape(float a)
    {
        x = a;
    }
    virtual void display()
    {
        cout << "Hi";
    }
};
class circle : public shape
{
    float radius;

public:
    circle(float r, float y) : shape(y)
    {
        radius = r;
    }
    void display()
    {
        cout << "Area of circle=" << (x * radius * radius) << endl;
    }
};
class square : public shape
{
    float side;

public:
    square(float s, float y) : shape(y)
    {
        side = s;
    }
    void display()
    {
        cout << "Area of square=" << (x * side * side) << endl;
    }
};
class triangle : public shape
{
    float base, height;

public:
    triangle(float b, float h, float y) : shape(y)
    {
        base = b;
        height = h;
    }
    void display()
    {
        cout << "Area of triangle=" << (x * base * height) << endl;
    }
};
int main()
{
    float radius, side, base, height;

    cout << "Enter radius" << endl;
    cin >> radius;
    circle ob1(radius, 3.14);

    cout << "Enter side" << endl;
    cin >> side;
    square ob2(side, 1.0);

    cout << "Enter base and height" << endl;
    cin >> base >> height;
    triangle ob3(base, height, 0.5);

    shape *ptr[3];
    ptr[0] = &ob1;
    ptr[1] = &ob2;
    ptr[2] = &ob3;

    ptr[0]->display();
    ptr[1]->display();
    ptr[2]->display();

    return 0;
}
