//Write a C++ program to perform basic arithmetic operations (Addition, Subtraction, 
//Multiplication, and Division) using inline functions.
#include <iostream>
using namespace std;

// Inline functions
inline int add(int a, int b)
{
    return a + b;
}

inline int subtract(int a, int b)
{
    return a - b;
}

inline int multiply(int a, int b)
{
    return a * b;
}

inline float divide(int a, int b)
{
    return (float)a / b;
}

int main()
{
    int num1, num2;
    int choice;

    cout << "=== SIMPLE CALCULATOR SYSTEM ===" << endl;

    cout << "Enter First Number: ";
    cin >> num1;

    cout << "Enter Second Number: ";
    cin >> num2;

    cout << "\nChoose Operation" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "Enter Your Choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Addition = " << add(num1, num2);
            break;

        case 2:
            cout << "Subtraction = " << subtract(num1, num2);
            break;

        case 3:
            cout << "Multiplication = " << multiply(num1, num2);
            break;

        case 4:
            if (num2 == 0)
            {
                cout << "Division by zero is not possible.";
            }
            else
            {
                cout << "Division = " << divide(num1, num2);
            }
            break;

        default:
            cout << "Invalid Choice!";
    }

    return 0;
}