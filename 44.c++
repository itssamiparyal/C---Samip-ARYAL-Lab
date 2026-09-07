//Lab: Write a C++ program to demonstrate binary + operator overloading.
//Add two complex numbers using a Complex class and display the result.

#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imaginary = i;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }

    void display()
    {
        cout << real << " + " << imaginary << "i";
    }
};

int main()
{
    Complex c1(5, 3);
    Complex c2(2, 4);

    Complex c3 = c1 + c2;

    cout << "Sum of Complex Numbers: ";
    c3.display();

    return 0;
}