/*Q3. Wap to display only even numbers between 1 to 150.*/
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=150;i++)
    {
        if(i%2==0)
        cout<<i<<endl;
    }
    return 0;
}