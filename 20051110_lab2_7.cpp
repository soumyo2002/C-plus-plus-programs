#include<iostream>
#include<math.h>
using namespace std;
class distance{
    float x[2],y[2];
    public:
    void input()
    {
        cout<<"Enter the x co-ordinate of 1st and 2nd point:"<<endl;
        cin>>x[0]>>x[1];
        cout<<"Enter the y co-ordinate of 1st and 2nd point:"<<endl;
        cin>>y[0]>>y[1];
    }
    void output()
    {
        float dist;
        dist=((x[1]-x[0])*(x[1]-x[0]))+((y[1]-y[0])*(y[1]-y[0]));
        dist=sqrt(dist);
        cout<<"Distance between the two points="<<dist;
    }
}p;
int main()
{
    p.input();
    p.output();
    return 0;
}
