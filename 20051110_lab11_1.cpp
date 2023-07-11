// WAP to throw and handle ‘division by zero’ exception.
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a and b" << endl;
    cin >> a >> b;
    try
    {
        if (b != 0)
        {
            cout << "Result of a/x=" << a / b << endl;
        }
        else
        {
            throw(b);
        }
    }
    catch (int i)
    {
        cout << "Divide by zero Exception caught" << endl;
    }

    return 0;
}