#include<iostream>
using namespace std;
struct employee{
    long id,basic_salary;
    int age;
    string name;
};
int main()
{
    int n;
    cout<<"Enter number of employees"<<endl;
    cin>>n;
    employee p[n];
    float DA[n],HRA[n],gross[n];
    for(int i=0;i<n;i++)
    {
    cout<<"Enter name of employee"<<(i+1)<<endl;
    cin>>p[i].name;
    cout<<"Enter age of employee"<<(i+1)<<endl;
    cin>>p[i].age;
    cout<<"Enter id of employee"<<(i+1)<<endl;
    cin>>p[i].id;
    cout<<"Enter basic salary of employee"<<(i+1)<<endl;
    cin>>p[i].basic_salary; 
    DA[i]=(0.8)*(float)(p[i].basic_salary);
    HRA[i]=(0.1)*(float)(p[i].basic_salary);
    gross[i]=((float)(p[i].basic_salary))+DA[i]+HRA[i];
    }
    cout<<"Information table:\n"<<"Name"<<"\t\t"<<"Age"<<"\t"<<"ID"<<"\t"<<"basic"<<"\t"<<"DA"<<"\t"<<"HRA"<<"\t"<<"Gross"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<p[i].name<<"\t\t"<<p[i].age<<"\t"<<p[i].id<<"\t"<<p[i].basic_salary<<"\t"<<DA[i]<<"\t"<<HRA[i]<<"\t"<<gross[i]<<endl;
    }
    return 0;
}