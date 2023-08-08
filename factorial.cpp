#include<iostream>
using namespace std;
int fact(int n)
{
    while(n!=1)
    {
    return(n*fact(n-1));
    }
    return 1;
}
int main()
{
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    cout<<"Factorial of "<<n<<" is ";
    if(n==0)
    {
        cout<<"1"<<endl;
    }
    else
    {
       cout<<fact(n)<<endl;   
    }
    return 0;
}