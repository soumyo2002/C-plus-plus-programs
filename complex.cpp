//  C++ Program to Add Two Complex Numbers
#include <iostream>
using namespace std;
class Complex
{
    int real, imaginary;

public:
    void input()
    {
        cout << "Enter integer part" << endl;
        cin >> real;
        cout << "Enter imaginary part" << endl;
        cin >> imaginary;
    }
    void display()
    {
        cout << real << "+" << imaginary << "i" << endl;
    }
    Complex addComp(Complex C1, Complex C2)
    {
        Complex temp;
        temp.real = C1.real + C2.real;
        temp.imaginary = C1.imaginary + C2.imaginary;
        return temp;
    }
};
int main()
{
    Complex C1, C2, C3;
    C1.input();
    C2.input();
    cout << "Complex number 1 = ";
    C1.display();
    cout << "Complex number 2 = ";
    C2.display();
    C3 = C3.addComp(C1, C2);
    cout << "Sum of complex number= ";
    C3.display();
}