#include<iostream>
using namespace std;
class student{
    string name;
    int roll,total;
    public:
    void input()
    {
    cout<<"Enter student name:"<<endl;
    cin>>name;
    cout<<"Enter student roll number:"<<endl;
    cin>>roll;
    cout<<"Enter student total marks:"<<endl;
    cin>>total;
    }
    void output()
    {
    cout<<"Student details:"<<endl;
    cout<<"Name:"<<name<<endl<<"Roll Number:"<<roll<<endl<<"Total marks obtained:"<<total<<endl;
    }
};
int main()
{
    student p;
    p.input();
    p.output();
    return 0;
}
