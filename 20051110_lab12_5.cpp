//WAP to find the reverse of a given number using template

#include<iostream>
using namespace std;
template<class T>

void reverse(T a)
{
    T rev=0;
    cout<<"Reverse of number "<<a<<"is: ";
    while(a!=0)
    {
        rev=rev*10+(a%10);
        a=a/10;
    }
    cout<<rev;
}
int main(){
    int z;
    cout<<"Enter number to be reversed:"<<endl;
    cin>>z;
    reverse(z);
   return 0;
}