#include<iostream>
using namespace std;
class student{
    string name;
    int roll,marks[5];
    public:
    void input()
    {
    cout<<"Enter student name:"<<endl;
    cin>>name;
    cout<<"Enter student roll number:"<<endl;
    cin>>roll;
    cout<<"Enter marks obtained by the student:"<<endl;
    for(int i=0;i<5;i++)
    {
    cin>>marks[i];
    }
    }
    void output()
    {
    int total=0;float per=0.0;
    for(int i=0;i<5;i++)
    {
        total=total+marks[i];
    }
    per=((float)(total))/5.0;
    cout<<"Student details:"<<endl;
    cout<<"Name:"<<name<<endl<<"Roll Number:"<<roll<<endl<<"Total marks obtained:"<<total<<endl<<"percentage obtained:"<<per<<endl;
    }
};
int main()
{
    student p;
    p.input();
    p.output();
    return 0;
}
