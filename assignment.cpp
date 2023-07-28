#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A(int b)
    {
        a = b;
    }
    void operator--()
    {
        --a;
    }
    int val()
    {
        if (a == 0)
            return 1;
        else
            return 0;
    }
    void show()
    {
        cout << a << endl;
    }
};
int main()
{
    A ob(5);
    try
    {
        while (1)
        {
            if (ob.val() != 1)
            {
                cout << "Updated value of a:";
                ob.show();
                --ob;
            }
            else
            {
                throw(1);
            }
        }
    }
    catch (int)
    {
        cout << "Exception caught...Value of a is ";
        ob.show();
    }

    return 0;
}