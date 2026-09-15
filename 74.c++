//Function Template to Find the Maximum of Two Values
#include <iostream>
using namespace std;

// Function template
template <class T>
T maximum(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    // Using function template with integers
    cout << "Greater Integer = " << maximum(18, 20) << endl;

    // Using function template with double
    cout << "Greater Double = " << maximum(18.5, 20.5) << endl;

    return 0;
}

