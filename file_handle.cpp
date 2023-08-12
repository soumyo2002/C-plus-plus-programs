#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st1;
    ifstream in("practise_handling.txt");
    getline(in, st1);
    cout << st1 << endl;
    for (int i = 0; i < 3; i++)
    {
        getline(in, st1);
        cout << st1 << endl;
    }
    return 0;
}