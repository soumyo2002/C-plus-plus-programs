#include<iostream>
using namespace std;
class fact{
    int num;
    public:
    void input()
    {
        cout<<"Enter the number:"<<endl;
        cin>>num;
    }
    void output()
    {
        int fact=1;
        for(int i=1;i<=num;i++)
        {
            fact=fact*i;
        }
        cout<<"Factorial of "<<num<<" is "<<fact;
    }
}p;
int main()
{
    p.input();
    p.output();
    return 0;
}