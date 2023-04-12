#include<iostream>
using namespace std;
class distance
{
    int feet,inches;
    public:
    distance()
    {
        feet=0;
        inches=0;
    }
    distance(int a,int b)
    {
        feet=a;
        inches=b;
    }
    void show()
    {
        cout<<feet<<" feet "<<inches<<" inches"<<endl;;
    }
    distance operator +(distance ob)
    {
        distance temp;
        temp.feet=feet+ob.feet;
        temp.inches=inches+ob.inches;
        return(temp);
    }
};
int main()
{
    distance ob1(2,5);
    distance ob2(7,6);
    distance ob3;
    ob3=ob1+ob2;
    ob3.show();
    return 0;
}