//Exception Handling for Division by Zero Using a Class
#include <iostream>
using namespace std;

class Number
{
public:
    void divide(int a, int b)
    {
        if (b == 0)
            throw "Division by zero is not allowed.";

        cout << "Result = " << (float)a / b << endl;
    }
};

int main()
{
    Number n;
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try
    {
        n.divide(a, b);
    }
    catch (const char* msg)
    {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}

