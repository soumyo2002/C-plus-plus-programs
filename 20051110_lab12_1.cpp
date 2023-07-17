// WAP to sort an integer array and a float array, using function template.
#include <iostream>
using namespace std;

template <class T>
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

template <class X>
void swap(X &a, X &b)
{
    X temp = a;
    a = b;
    b = temp;
}
int main()
{
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
    bubble(arr, n);
    cout << "Enter data for float array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bubble(a, n);
    cout << "Sorted 1st array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "Sorted 2nd array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}