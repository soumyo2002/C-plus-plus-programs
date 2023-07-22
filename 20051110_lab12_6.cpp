//WAP to create a template to find the maximum value stored in an array.
#include<iostream>
using namespace std;
template<class T>

void max(T a[],int n)
{
    T max=a[0];
    for(int i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    cout<<"Maximum element in an array:"<<max<<endl;
}
int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    char arr[n];
    cout<<"Enter characters in the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max(arr,n);
   return 0;
}