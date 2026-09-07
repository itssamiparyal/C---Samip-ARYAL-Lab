//Lab:Write a C++ program to demonstrate user-defined to user-defined conversion by converting a `Kilogram` object into a `Gram` object using a conversion function.

#include <iostream>
using namespace std;

// Destination class
class Gram
{
public:
    float gm;

    // Constructor
    Gram(float g = 0)
    {
        gm = g;
    }

    // Display function
    void display()
    {
        cout << "Weight in Gram = " << gm << " g" << endl;
    }
};

// Source class
class Kilogram
{
public:
    float kg;

    // Parameterized constructor
    Kilogram(float k)
    {
        kg = k;
    }

    // Conversion function
    operator Gram()
    {
        return Gram(kg * 1000);
    }
};

int main()
{
    float weight;

    // Input weight in kilogram
    cout << "Enter weight in Kilogram: ";
    cin >> weight;

    // Creating Kilogram object
    Kilogram k1(weight);

    // Kilogram object converted into Gram object
    Gram g1 = k1;

    // Display converted weight
    g1.display();

    return 0;
}