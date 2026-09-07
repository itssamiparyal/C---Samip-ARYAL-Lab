//Lab: Write a C++ program to demonstrate + operator overloading.
// Create an Add class and use a parameterized constructor to add 
//two objects.

#include <iostream>
using namespace std;

// Class definition
class Add
{
    int num;  // Data member

public:
    // Parameterized constructor
    Add(int n)
    {
        num = n;
    }

    // Overloading the + operator
    Add operator+(Add obj)
    {
        Add temp(0);
        temp.num = num + obj.num;
        return temp;
    }

    // Function to display the result
    void display()
    {
        cout << "Result = " << num << endl;
    }
};

// Main function
int main()
{
    // Create two objects
    Add a1(10), a2(10);

    // Use overloaded + operator
    Add a3 = a1 + a2;

    // Display the result
    a3.display();

    return 0;
}