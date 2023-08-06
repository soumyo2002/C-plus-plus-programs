#include<iostream>
using namespace std;
class E
{
int a;
public:
    void input()
    {
        cout<<"Enter";
        cin>>a;
    }
};

int main () {
    E *ob=new E[2];
    cin>>ob[0].a;
    return 0;
}