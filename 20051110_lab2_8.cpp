#include<iostream>
using namespace std;
class fibo{
    int n;
    public:
    void input()
    {
        cout<<"Enter the number of elements:"<<endl;
        cin>>n;
    }
    void output()
    {
        int n1=0,n2=1,n3;
        cout<<n1<<","<<n2<<",";
        for(int i=2;i<n;i++)
        {

            n3=n1+n2;
            if(i!=(n-1))
            {
            cout<<n3<<",";
            }
            else
            {
            cout<<n3;
            }
            n1=n2;
            n2=n3;
        }
    }
}f;
int main()
{
    f.input();
    f.output();
    return 0;
}