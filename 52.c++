//Lab:Write a C++ program to demonstrate user-defined to user-defined conversion. Create classes Celsius and Fahrenheit. Use a conversion function to convert a Celsius object into a Fahrenheit object.

#include <iostream>
using namespace std;

// Destination class
class Fahrenheit
{
public:
    float fahrenheit;

    // Constructor
    Fahrenheit(float f = 0)
    {
        fahrenheit = f;
    }

    // Display function
    void display()
    {
        cout << "Temperature in Fahrenheit = "
             << fahrenheit << " F" << endl;
    }
};

// Source class
class Celsius
{
public:
    float celsius;

    // Parameterized constructor
    Celsius(float c)
    {
        celsius = c;
    }

    // Conversion function
    operator Fahrenheit()
    {
        return Fahrenheit((celsius * 9 / 5) + 32);
    }
};

int main()
{
    float temp;

    // User input
    cout << "Enter temperature in Celsius: ";
    cin >> temp;

    // Creating Celsius object
    Celsius c1(temp);

    // Celsius object converted into Fahrenheit object
    Fahrenheit f1 = c1;

    // Display result
    f1.display();

    return 0;
}