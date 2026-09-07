//Lab:Write a program that converts object of another distance class with data members feet and inch.(Assume 1m = 3.3 feet and 1cm = 0.4 inch)

#include <iostream>
using namespace std;

// Source class: Distance in Meter and Centimeter
class Meter
{
public:
    float meter;
    float centimeter;

    // Parameterized constructor
    Meter(float m, float cm)
    {
        meter = m;
        centimeter = cm;
    }
};

// Destination class: Distance in Feet and Inch
class Feet
{
public:
    float feet;
    float inch;

    // Conversion constructor
    // Converts Meter object into Feet object
    Feet(Meter d)
    {
        // 1 meter = 3.3 feet
        feet = d.meter * 3.3;

        // 1 cm = 0.4 inch
        inch = d.centimeter * 0.4;
    }

    // Function to display distance
    void display()
    {
        cout << "Distance in Feet and Inch:" << endl;
        cout << "Feet = " << feet << endl;
        cout << "Inch = " << inch;
    }
};

int main()
{
    float m, cm;

    // Taking input from user
    cout << "Enter distance in Meter: ";
    cin >> m;

    cout << "Enter distance in Centimeter: ";
    cin >> cm;

    // Creating object of Meter class
    Meter d1(m, cm);

    // Meter object converted into Feet object
    Feet f1 = d1;

    // Display converted distance
    f1.display();

    return 0;
}