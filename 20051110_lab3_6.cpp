/*Q6. Wap to find the area of  a triangle by using default values and actual values.(Area=0.5*base)*/
#include<iostream>
using namespace std;
float area(float b=2.0,float h=3.0)
{
    return(0.5*b*h);
}
int main()
{
    float l,b;
    float a=area();
    cout<<"Area of triangle with default values="<<a<<endl;
    cout<<"Enter length and breadth"<<endl;
    cin>>l>>b;
    a=area(b,l);
    cout<<"Area of triangle with actual values="<<a<<endl;
    return 0;
}