#include <iostream>
using namespace std;
class Employee
{
protected:
    int empno;
    string name, designation;

public:
    void input()
    {
        cout << "Enter name,designation and employee number:" << endl;
        cin >> name >> designation >> empno;
    }
    void show()
    {
        cout << "Name:" << name << endl;
        cout << "Designation:" << designation << endl;
        cout << "employee number:" << empno << endl;
    }
};
class Qualification : public virtual Employee
{
protected:
    string UG, PG;
    int experience;

public:
    void input1()
    {
        cout << "Enter course name for PG,UG and experience" << endl;
        cin >> UG >> PG >> experience;
    }
};
class Salary : public virtual Employee, public Qualification
{
    int salary, a, b;

public:
    void input2()
    {
        cout << "Enter base salary" << endl;
        cin >> salary;
    }
    void calculate()
    {
        if (UG == "BTECH" && PG == "MTECH")
        {
            if (experience >= 1 && experience <= 3)
                a = 5;
            else if (experience >= 4 && experience <= 8)
                a = 10;
            else
                a = 20;
        }
        else if (UG == "BTECH" && PG == "MBA")
        {
            if (experience >= 1 && experience <= 3)
                a = 10;
            else if (experience >= 4 && experience <= 8)
                a = 20;
            else
                a = 30;
        }
        else
        {
            if (experience >= 1 && experience <= 3)
                a = 5;
            else if (experience >= 4 && experience <= 8)
                a = 10;
            else
                a = 15;
        }
        b = (a * salary)/100;
    }
    void output()
    {
        cout << "UG:" << UG << endl;
        cout << "PG:" << PG << endl;
        cout << "Experience:" << experience << endl;
        cout << "Salary:" << salary << endl;
        cout << "Based on education qualification and job experience increment alloted is " << a << "%" << endl
             << "Increment=" << b << endl;
    }
};
int main()
{
    Salary ob;
    ob.Employee::input();
    ob.input1();
    ob.input2();
    ob.calculate();
    ob.Employee::show();
    ob.output();
    return 0;
}