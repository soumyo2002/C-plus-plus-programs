// WAP to accept 10 integers in an array.Check all the numbers in the array.When an negative number is found then throw an exception
#include <iostream>
using namespace std;
int main()
{
    int a[10];
    cout << "Enter array elements" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    try
    {
        for (int i = 0; i < 10; i++)
        {
            if (a[i] < 0)
                throw(i);
        }
    }
    catch (int m)
    {
        cout << "Caught a negative number and the number is " << a[m] << " at position " << (m + 1) << endl;
    }

    return 0;
}