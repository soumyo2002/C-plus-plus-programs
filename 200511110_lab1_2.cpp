#include<iostream>
using namespace std;
struct student{
    string a;
    long b;
    int m[5];
};
int main()
{
    student p;
    int n;
    cout<<"Enter the number of students"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cout<<"Enter name of student"<<i<<endl;
    cin>>p.a;
    cout<<"Enter Roll No of the student"<<i<<endl;
    cin>>p.b;
    cout<<"Enter marks in 5 subjects for student"<<i<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>p.m[i];
    }
}