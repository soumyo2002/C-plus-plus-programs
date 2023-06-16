/*Q5. Wap to overload area function to calculate area of a triangle, area of rectangle
area of circle, area of cylinder.
*/
#include<iostream>
using namespace std;
int area(int l,int b)
{
    return(l*b);
}
float area(float r)
{
    return(3.14*r*r);
}
float area(float bs,float ht)
{
   return((bs*ht)/2);
}
float area(float n,float r,float h)
{
    return(n*3.14*r*h);
}
int main()
{
        int l,b;
        float r,bs,ht;
        float rad,height;
        cout<<"Enter length and breadth of rectangle: \n";
        cin>>l>>b;
        cout<<"Enter radius of circle: \n";
        cin>>r;
        cout<<"Enter base and height of triangle: \n";
        cin>>bs>>ht;
        cout<<"Enter radius and height of triangle: \n";
        cin>>rad>>height;
        cout<<"\nArea of rectangle is "<<area(l,b);
        cout<<"\nArea of circle is "<<area(r);
        cout<<"\nArea of triangle is "<<area(bs,ht);
        cout<<"\nArea of cylinder is "<<area(2.0,rad,height);
        return 0;
}
