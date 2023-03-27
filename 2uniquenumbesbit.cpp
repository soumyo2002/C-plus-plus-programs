/*
#include<iostream>
using namespace std;
int setBit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}
void unique(int arr[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=(xorsum^arr[i]);
    }
    int temp=xorsum;
    int pos=0,setbit=0;
    while(setbit!=1)
    {
        setbit=(xorsum & 1);
        pos++;
        xorsum=(xorsum>>1);
    }
    int newxor=0;
    for(int i=0;i<n;i++)
    {
        if(setBit(arr[i],pos-1)==1)
        {
        newxor=(newxor^arr[i]);
        }
    }
    int z=(temp^newxor);
    cout<<newxor<<","<<z<<endl;
}
int main()
{
int a[]={2,4,6,7,4,5,6,2};
unique(a,8);
return 0;
}
*/

#include<stdio.h>
#include<stdlib.h>
//Stack ADT Type Definitions
typedef struct node
{
void *DataPtr;
struct node *link;
} StackNode;
typedef struct
{
int count;
StackNode *top;
} STACK;
int main()
{
   struct ob;
   ob.push(1);
   ob.pop();
   return 0;

}

