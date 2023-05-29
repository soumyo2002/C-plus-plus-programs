/*Q4. Wap to calculate the sum of numbers between 1 to N numbers.The user should enter the value of N.*/
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter N:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum="<<sum;
    return 0;
}