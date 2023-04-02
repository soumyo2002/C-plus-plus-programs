#include <iostream>
using namespace std;
class Employee
{
protected:
   char name[50];
   int id,age;
public:
    void input()
    {
        cout<<"Enter name,age,ID of the employee:"<<endl;
        cin>>name>>id>>age;
    }
    void output()
    {
        cout << "Name:" << name << endl;
        cout << "ID:" << id << endl;
        cout<<"Age:"<<age<<endl;
    }
};
class salary:public Employee
{
    int s;
    public:
    void input1()
    {
        cout<<"Enter salary:"<<endl;
        cin>>s;
    }
    void output1()
    {
        cout<<"Salary of the employee:"<<s;
    }
};
int main()
{
    salary ob[5];
    for(int i=1;i<=5;i++)
    {
        cout<<"Enter details for employee"<<i<<endl;
        ob[i].input();
        ob[i].input1();
    }
    for(int i=1;i<=5;i++)
    {
        cout<<"\nDetails for employee"<<i<<endl;
        ob[i].output();
        ob[i].output1();
    }
    return 0;
}
