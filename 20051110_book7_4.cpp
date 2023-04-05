#include <iostream>
using namespace std;
class Student
{
protected:
    char name[20];
    int age, roll,marks;

public:
    void input()
    {
        cout << "Enter name,age,roll and marks obtained" << endl;
        cin >> name >> age >> roll >> marks;
    }
    int get()
    {
        int m;
        m = marks;
        return (m);
    }
};
class topper : public Student
{
public:
    void output()
    {
        cout << "Name:" << name << endl
             << "Age:" << age << endl
             << "Roll number:" << roll << endl
             << "Marks:" << marks << endl;
    }
};
int main()
{
    int index[3], max[3], marks[10];
    max[0] = 0;
    max[1] = 0;
    max[2] = 0;
    topper ob[10];
    for (int i = 0; i < 10; i++)
    {
        ob[i].input();
        marks[i] = ob[i].get();
    }
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 10; i++)
        {
            if (max[0] <= marks[i])
            {
                max[0] = marks[i];
                index[0] = i;
            }
            else if (max[1] <= marks[i])
            {
                max[1] = marks[i];
                index[1] = i;
            }
            else if (max[2] <= marks[i])
            {
                max[2] = marks[i];
                index[2] = i;
            }
        }
    }
    cout << "\nDetails about top 3 students:" << endl;
    for (int i = 0; i < 3; i++)
    {
        ob[index[i]].output();
    }
    return 0;
}