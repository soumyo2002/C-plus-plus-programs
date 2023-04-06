#include <iostream>
using namespace std;
class person
{
    protected:
    char name[50],sex[10];
    int age;
    public:
    void input()
    {
        cout<<"Enter name,age and sex of the person:"<<endl;
        cin>>name>>age>>sex;
    }
    void output()
    {
        cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl<<"Sex:"<<sex<<endl;
    }
};
class Baseball_player:public person{
    protected:
    int avg,homerun;
    public:
    void input()
    {
        cout<<"Enter average runs and homeruns scored:"<<endl;
        cin>>avg>>homerun;
    }
    void output()
    {
        cout<<"Average runs score by the player:"<<avg<<endl<<"Total number of homeruns scored:"<<homerun<<endl;
    }
};
int main()
{
    Baseball_player ob;
    ob.person::input();
    ob.input();
    ob.person::output();
    ob.output();
    return 0;
}