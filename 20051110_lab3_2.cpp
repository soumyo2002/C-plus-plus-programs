/*Q2. Define a class to represent a bank account include the following data members 
1. Name of the depositor
2. Account no.
3. Type of account
4. Balance in account and member functions are 

1. To assign initial value 
2. To deposit an amount 
3. To withdraw an amount after checking balance 
4. To display name and balance. Write a main to test the program.
*/
#include<iostream>
using namespace std;
class bank{
    string name,type;
    long acc_no;
    float balance;
    public:
    void assign()
    {
        cout<<"Enter Name: \n";
        cin>>name;
        cout<<"Enter type of account: \n";
        cin>>type;
        cout<<"Enter account number: \n";
        cin>>acc_no;
        cout<<"Enter Balance: \n";
        cin>>balance;
    }
    void deposit()
    {
        float a;
        cout<<"Enter the deposit amount:"<<endl;
        cin>>a;
        balance=balance+a;
    }
    void withdraw()
    {
        float b,c;
        cout<<"Enter the minimum balance:"<<endl;
        cin>>c;
        cout<<"Enter the withdraw amount:"<<endl;
        cin>>b;
        if(b<=c)
        {
            balance=balance-b;
            cout<<"Withdrawal processed"<<endl;
        }
        else
        {
            cout<<"Insufficient cash"<<endl;
        }
    }
    void display()
    {
        cout<<"Bank details:"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Balance:"<<balance<<endl;
    }
};
int main()
{
    bank p;
    p.assign();
    p.deposit();
    p.withdraw();
    p.display();
    return 0;
}