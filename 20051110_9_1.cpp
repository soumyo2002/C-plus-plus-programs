#include <iostream>
using namespace std;
class DIST
{
    int feet, inches;

public:
    DIST()
    {
        feet = 0;
        inches = 0;
    }
    DIST(int a, int b)
    {
        feet = a;
        inches = b;
    }
    void show()
    {
        cout << feet << " feet " << inches << " inches" << endl;
    }
    DIST operator+(DIST ob)
    {
        DIST temp;
        temp.feet = feet + ob.feet;
        temp.inches = inches + ob.inches;
        return (temp);
    }
    DIST operator+(int a)
    {
        DIST temp;
        temp.feet = feet;
        temp.inches = inches + a;
        return (temp);
    }
    friend DIST operator-(DIST);
};
DIST operator-(DIST ob)
{
    ob.feet = -ob.feet;
    ob.inches = -ob.inches;
    return (ob);
}
int main()
{
    DIST ob1(2, 5);
    DIST ob2(7, 6);
    DIST ob3;
    DIST ob4;
    DIST ob5;
    cout << "1st set:" << endl;
    ob1.show();
    cout << "2nd set:" << endl;
    ob2.show();
    ob3 = ob1 + ob2;
    cout << "Adding two objects:" << endl;
    ob3.show();
    cout << "Adding object1 and an integer:" << endl;
    ob4 = ob1 + 4;
    ob4.show();
    ob5 = -ob2;
    cout << "Overloading unary operator minus on 2nd object:" << endl;
    ob5.show();
    return 0;
}