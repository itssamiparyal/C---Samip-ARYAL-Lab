//Function Template with Multiple Type Parameters to Add Two Different Data Types
#include <iostream>
using namespace std;

// Function template with multiple type parameters
template <class T, class U>
auto add(T a, U b)
{
    return a + b;
}

int main()
{
    // Adding integer and double
    cout << "Sum = " << add(18, 20.5) << endl;

    // Adding double and integer
    cout << "Sum = " << add(18.5, 20) << endl;

    return 0;
}