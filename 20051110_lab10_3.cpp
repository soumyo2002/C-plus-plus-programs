#include <iostream>
using namespace std;
class Account
{
protected:
    int accno, accno1;
    string name;

public:
    Account(int x, int y, string z)
    {
        accno = x;
        accno1 = y;
        name = z;
    }
    virtual void Deposit()
    {
    }
    virtual void withdraw()
    {
    }
};
class Savings : public Account
{
protected:
    int min, bal, deposit, w;

public:
    Savings(int x, int y, string z) : Account(x, y, z)
    {
    }
    void input()
    {
        cout << "Enter minimum balance required in savings account:" << endl;
        cin >> min;
        cout << "Enter Balance in savings account:" << endl;
        cin >> bal;
    }
    void Deposit()
    {
        cout << "Name of Account Holder:" << name << endl
             << "Account number:" << accno << endl;
        cout << "Enter amount to be deposited:" << endl;
        cin >> deposit;
        bal = bal + deposit;
        cout << "Money successfully deposited to you savings account number" << accno << endl;
        cout << "Updated balanced:Rs." << bal << endl;
    }
    void withdraw()
    {
        cout << "Enter amount to be withdrawn:" << endl;
        cin >> w;
        if ((bal - w) >= min)
        {
            bal = bal - w;
            cout << "Money successfully withdrawn from your savings account number" << accno << endl;
            cout << "Updated balanced:Rs." << bal << endl;
        }
        else
        {
            cout << "Transaction unsuccessfully! as the withdrawal amount exceeds the minimum amount required to maintain savings account" << endl;
        }
    }
};
class Current : public Account
{
protected:
    int over, bal, deposit, w;

public:
    Current(int x, int y, string z) : Account(x, y, z)
    {
    }
    void input()
    {
        cout << "Enter the limit of overdrawing money:" << endl;
        cin >> over;
        cout << "Enter Balance in current account:" << endl;
        cin >> bal;
    }
    void Deposit()
    {
        cout << "Name of Account Holder:" << name << endl
             << "Account number:" << accno1 << endl;
        cout << "Enter amount to be deposited:" << endl;
        cin >> deposit;
        bal = bal + deposit;
        cout << "Money successfully deposited to you current account number" << accno1 << endl;
        cout << "Updated balanced:Rs." << bal << endl;
    }
    void withdraw()
    {
        cout << "Enter amount to be withdrawn:" << endl;
        cin >> w;
        if (w >= bal)
        {
            if ((w - bal) <= over)
            {
                cout << "Money successfully withdrawn from your current account number" << accno1 << endl;
                cout << "Updated balanced:Rs.0" << endl;
                if (w > bal)
                    cout << "Overdrawn money:Rs." << (w - bal) << endl;
                bal = 0;
            }
            else
            {
                cout << "Transaction unsuccessfully as the overdrawn amount exceeds the minimum amount of overdrawn money allowed in your current account" << endl;
            }
        }
        else
        {
            cout << "Money successfully withdrawn from your current account" << accno1 << endl;
            cout << "Updated balanced:Rs" << bal << endl;
        }
    }
};
int main()
{
    int x, y;
    string z;

    cout << "Enter name and account number for savings account" << endl;
    cin >> z >> x;

    Savings ob(x, 0, z);
    ob.input();
    Account *ptr = &ob;
    ptr->Deposit();
    ptr->withdraw();
    cout << "Enter name and account number for current account" << endl;
    cin >> z >> y;
    Current ob1(0, y, z);
    ob1.input();
    Account *ptr1 = &ob1;
    ptr1->Deposit();
    ptr1->withdraw();
    return 0;
}