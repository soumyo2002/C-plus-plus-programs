#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size \n";
    cin>>n;
    int a[n];
    cout<<"Enter array elements \n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxsum=0,totalsum=0,nonsum=INT_MIN,s=0;
    for(int i=0;i<n;i++)
    {
        totalsum=totalsum+a[i];
        a[i]=-a[i];
    }
    for(int i=0;i<n;i++)
    {
        s=s+a[i];
        if(s<0)
        {
            s=0;
        }
        if(s>nonsum)
        {
            nonsum=s;
        }
    }
    maxsum=totalsum+nonsum;
    cout<<"Maximum circular subarray sum="<<maxsum;
}