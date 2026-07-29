//Write a C++ program to demonstrate the use of default arguments.
#include <iostream>
using namespace std;

int add(int a, int b = 10)
{
    return a + b;
}

int main()
{
    cout << add(20) << endl;
    cout << add(20, 30);

    return 0;
}