//Lab:-Write a C++ program to convert a Meter class object into a Centimeter classm object. Deonstrate user-defined to user-defined conversion using a conversion constructor.

#include <iostream>
using namespace std;

// Source class
class Meter
{
public:
    int meter;

    // Parameterized constructor
    Meter(int m)
    {
        meter = m;
    }
};

// Destination class
class Centimeter
{
public:
    int centimeter;

    // Conversion constructor
    // It accepts an object of Meter class
    Centimeter(Meter obj)
    {
        // 1 Meter = 100 Centimeter
        centimeter = obj.meter * 100;
    }

    // Member function to display result
    void display()
    {
        cout << "Distance in Centimeter = " << centimeter << " cm";
    }
};

int main()
{
    int m;

    // Taking meter value from user
    cout << "Enter distance in meter: ";
    cin >> m;

    // Creating Meter class object
    Meter m1(m);

    // User-defined to user-defined conversion
    // Meter object is converted into Centimeter object
    Centimeter c1 = m1;

    // Display converted value
    c1.display();

    return 0;
}