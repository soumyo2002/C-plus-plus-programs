#include <iostream>
using namespace std;
class Employee
{
protected:
  string employee_name;
  int ID;
  int salary;

public:
  Employee(string a, int b, int c)
  {
    employee_name = a;
    ID = b;
    salary = c;
  }
  virtual void display()
  {
  }
};

class Regular : public Employee
{
  int DA, HRA, basic;

public:
  Regular(int x, int y, int z, string a, int b, int c) : Employee(a, b, c)
  {
    DA = x;
    HRA = y;
    basic = z;
  }
  void display()
  {
    cout << "Employee name:" << employee_name << endl
         << "Employee ID:" << ID << endl
         << "Salary:" << (salary + DA + HRA + basic) << endl;
  }
};

class part_time : public Employee
{
  int n, p;

public:
  part_time(int x, int y, string a, int b, int c) : Employee(a, b, c)
  {
    n = x;
    p = y;
  }
  void display()
  {
    cout << "Employee name:" << employee_name << endl
         << "Employee ID:" << ID << endl
         << "Salary:" << (salary + (n * p)) << endl;
  }
};

int main()
{
  string name;
  int income, id, da, hra, b, no, pay;
  cout << "Enter Name of regular Employee" << endl;
  cin >> name;

  cout << "Enter ID of regular Employee" << endl;
  cin >> id;

  cout << "Enter income of regular Employee" << endl;
  cin >> income;

  cout << "Enter DA,HRA and basic salary" << endl;
  cin >> da >> hra >> b;

  Regular ob(da, hra, b, name, id, income);
  Employee *ptr = &ob;
  ptr->display();

  cout << "Enter Name of part time Employee" << endl;
  cin >> name;

  cout << "Enter ID of part time Employee" << endl;
  cin >> id;

  cout << "Enter income of part time Employee" << endl;
  cin >> income;

  cout << "Enter working hours and pay per hour" << endl;
  cin >> no >> pay;

  part_time ob1(no, pay, name, id, income);
  Employee *ptr1 = &ob1;
  ptr1->display();

  return 0;
}