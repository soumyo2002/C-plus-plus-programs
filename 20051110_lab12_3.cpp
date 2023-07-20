// Rewrite program i. using class template

#include <iostream>
using namespace std;

template <class T>

class sort
{
public:
    void bubble(T a[], int n)
    {
        for (int i = 0; i < (n - 1); i++)
        {
            for (int j = (n - 1); i < j; j--)
                if (a[j] < a[j - 1])
                {
                    swap(a[j], a[j - 1]);
                }
        }
    }
    void swap(T &a, T &b)
    {
        T temp = a;
        a = b;
        b = temp;
    }
};

int main()
{
    sort<int> v;
    sort<float> v1;
    int n;
    cout << "Enter array size:" << endl;
    cin >> n;
    int arr[n];
    float a[n];
    cout << "Enter data for integer array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter data for float array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    v.bubble(arr, n);
    cout << "Sorted 1st array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    v1.bubble(a, n);
    cout << "Sorted 2nd array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}