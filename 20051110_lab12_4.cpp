// Rewrite program ii. using class template
#include <iostream>
using namespace std;

template <class T1, class T2, class T3>
class print
{
public:
    void show(T1 a, T2 b, T3 c)
    {
        cout << a << "  " << b << "  " << c << endl;
    }
};

int main()
{
    int a;
    char c;
    float b;
    cout << "Enter a integer,float and character value:" << endl;
    cin >> a >> b >> c;
    print<int, float, char> ob;
    ob.show(a, b, c);
    return 0;
}