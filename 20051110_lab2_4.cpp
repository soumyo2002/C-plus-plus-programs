#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
    void input()
 {
     cout<<"Enter the real part:"<<endl;
     cin>>real;
     cout<<"Enter the imaginary part:"<<endl;
     cin>>img;
 }
 void output()
 {
     if(img>0)
     {
     cout<<real<<"+"<<img<<"i"<<endl;
     }
     else
     {
         cout<<real<<img<<"i"<<endl; 
     }
 }
}p[10];
int main()
{
    for(int i=0;i<10;i++)
    {
    cout<<"Enter details of complex number "<<i+1<<endl;
    p[i].input();
    }
    for(int i=0;i<10;i++)
    {
    cout<<"complex number "<<i+1<<endl;
    p[i].output();
    }
    return 0;
}