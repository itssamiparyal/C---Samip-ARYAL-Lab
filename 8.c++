//Simple Calculator using switch statement

#include <iostream>
using namespace std;

int main()
{
    int a, b, choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter Choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Sum = " << a + b;
            break;

        case 2:
            cout << "Difference = " << a - b;
            break;

        case 3:
            cout << "Product = " << a * b;
            break;

        case 4:
            if (b != 0)
                cout << "Quotient = " << (float)a / b;
            else
                cout << "Division by zero is not possible.";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}