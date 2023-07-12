// WAP to throw and handle 'array out of bound' exception.
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter array size:" << endl;
    cin >> n;
    int a[n];
    cout << "Enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the positions:" << endl;
    cin >> m;
    try
    {
        if (m <= n)
        {
            cout << "Element at that position is:" << a[m - 1] << endl;
        }
        else
        {
            throw(m);
        }
    }
    catch (int m)
    {
        cout << "Array out of bounds exception" << endl;
    }

    return 0;
}
