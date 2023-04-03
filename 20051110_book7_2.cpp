#include <iostream>
using namespace std;
class student
{
protected:
    int roll;
    string name;

public:
    void input(string a, int b)
    {
        name = a;
        roll = b;
    }
};
class fees : public student
{
    int fees;

public:
    void input1()
    {
        cout << "Enter fees:" << endl;
        cin >> fees;
    }
    void output()
    {
        cout << "\nReceipt:" << endl;
        cout << "Name:" << name << endl;
        cout << "Roll number:" << roll << endl;
        cout << "Fee amount submitted:" << fees << endl;
    }
};
class result : public student
{
    int m[3];
    char g[3];

public:
    void input2()
    {
        cout << "Enter marks in 3 subjects" << endl;
        for (int i = 0; i < 3; i++)
        {
            cin >> m[i];
        }
    }
    void calculate()
    {
        for (int i = 0; i < 3; i++)
        {
            if (m[i] >= 40 && m[i] < 50)
                g[i] = 'E';
            else if (m[i] >= 50 && m[i] < 60)
                g[i] = 'D';
            else if (m[i] >= 60 && m[i] < 70)
                g[i] = 'C';
            else if (m[i] >= 70 && m[i] < 80)
                g[i] = 'B';
            else if (m[i] >= 80 && m[i] < 90)
                g[i] = 'A';
            else if (m[i] >= 90 && m[i] <= 100)
                g[i] = 'E';
            else
                g[i] = 'F';
        }
    }
    void output1()
    {
        cout << "RESULT:" << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "Marks of student in subject" << (i + 1) << " =" << m[i] << endl;
            cout << "Grade of student in subject" << (i + 1) << " =" << g[i] << endl;
        }
    }
};
int main()
{
    string name;
    int roll;
    cout << "\nEnter name,roll number:" << endl;
    cin >> name >> roll;
    result ob;
    fees ob1;
    ob.input(name, roll);
    ob1.input(name, roll);
    ob1.input1();
    ob1.output();
    ob.input2();
    ob.calculate();
    ob.output1();
    return 0;
}