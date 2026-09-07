//Lab: Convert between Rupee and Dollar using conversion operators.
#include <iostream>
using namespace std;

// Source class: Rupee
class Rupee
{
public:
    float rupee;

    // Parameterized constructor
    Rupee(float r)
    {
        rupee = r;
    }
};

// Destination class: Dollar
class Dollar
{
public:
    float dollar;

    // Conversion constructor
    // Converts Rupee object into Dollar object
    Dollar(Rupee r)
    {
        // 1 Dollar = 154 Rupees
        dollar = r.rupee / 154;
    }

    // Function to display dollar value
    void display()
    {
        cout << "Amount in Dollar: " << endl;
        cout << "Dollar = " << dollar;
    }
};

int main()
{
    float r;

    // Taking input from user
    cout << "Enter amount in Rupees: ";
    cin >> r;

    // Creating object of Rupee class
    Rupee r1(r);

    // Rupee object converted into Dollar object
    Dollar d1 = r1;

    // Display converted amount
    d1.display();

    return 0;
}