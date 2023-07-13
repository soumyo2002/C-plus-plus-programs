// WAP to demonstrate multiple catch and catch all.
#include <iostream>
using namespace std;
void test(int x)
{
    try
    {
        if (x == 0)
            throw x;
        if (x == -1)
            throw 'x';
        else
            throw 1.0;
    }
    catch (char c)
    {
        cout << "Caught a character" << endl;
    }
    catch (int m)
    {
        cout << "Caught an integer" << endl;
    }
    catch (...)
    {
        cout << "Exception caught" << endl;
    }
}
int main()
{
    test(-1);
    test(0);
    test(1);
    test(100);
    return 0;
}