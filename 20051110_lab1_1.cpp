#include<iostream>
using namespace std;
struct student{
    string a;
    int b;
    int m[5];
};
int main()
{
    struct student p;
    cout<<"Enter name of the student"<<endl;
    cin>>p.a;
    cout<<"Enter Roll No of the student"<<endl;
    cin>>p.b;
    cout<<"Enter marks of the student in 5 subjects"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>p.m[i];
    }
    cout<<"Name of the student:"<<p.a<<endl<<"Roll No of the student:"<<p.b<<endl<<"Marks of the student in 5 subjects are:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"Marks in subject"<<(i+1)<<" is "<<p.m[i]<<endl;
    }
    return 0;
}