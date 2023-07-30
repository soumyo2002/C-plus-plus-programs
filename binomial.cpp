#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    double i,p=0.0,s;
    cout<<"Enter the number to be converted \n";
    cin>>n;
    i=n-1;
    while(n>0)
    {
        s=n%10;
        n=n/10;
        p=p+s*pow(s,i);
    }
    cout<<"decimal number is "<<p;
    return 0;
}