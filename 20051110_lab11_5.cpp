// WAP to accept a string.When a space is encountered throw an exception.
#include <iostream>
using namespace std;
void detect(char s[], int i)
{
    try
    {
        if (s[i] == ' ')
            throw(i);
    }
    catch (int i)
    {
        cout << "Caught an exception at " << i << "th position" << endl;
    }
}
int main()
{
    char s[50];
    cout << "Enter string:" << endl;
    cin.getline(s, 50);
    int size = sizeof(s) / sizeof(char);
    for (int i = 0; i < size; i++)
    {
        detect(s, i);
    }
    return 0;
}