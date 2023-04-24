#include<iostream>
using namespace std;
class Employee{
    int id,basic,age;
    string name;
    public:
    void input()
    {
        cout<<"Enter name of the employee:"<<endl;
        cin>>name;
        cout<<"Enter age of the employee:"<<endl;
        cin>>age;
        cout<<"Enter ID of the employee:"<<endl;
        cin>>id;
        cout<<"Enter basic salary of the employee:"<<endl;
        cin>>basic;
    }
    void output()
    {
        float DA=0.0,HRA=0.0,gross=0.0;
        DA=0.8*(float)(basic);
        HRA=0.1*(float)(basic);
        gross=DA+HRA+(float)(basic);
        cout<<name<<"\t"<<age<<"\t"<<id<<"\t"<<basic<<"\t"<<gross<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter the no of employees"<<endl;
    cin>>n;
    Employee p[n];
    for(int i=0;i<n;i++)
    {
    p[i].input();
    }
    cout<<"Name"<<"\t"<<"Age"<<"\t"<<"ID"<<"\t"<<"basic"<<"\t"<<"gross"<<endl;
    for(int i=0;i<n;i++)
    {
    p[i].output();
    }
    return 0;
}
