#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter no of elements\n ";
cin>>n;
int a[n];
cout<<"Enter array elements\n ";
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int pd=a[1]-a[0];
int curr=1,ans=0,max=0;
for(int j=2;j<n;j++)
{
    if(pd==a[j]-a[j-1])
    {
        curr++;
    }
    else
    {
        pd=a[j]-a[j-1];
        if(max<curr)
        max=curr;
        curr=1;
    }
}
max++;
cout<<"Length "<<max;
}