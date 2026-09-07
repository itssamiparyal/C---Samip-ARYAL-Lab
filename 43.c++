//Lab: Write a C++ program to overload the > operator in a PERSON class.
//Compare the ages of two persons and display the name of the elder person.
#include <iostream>
#include <string>
using namespace std;

// Class definition
class PERSON
{
    string name;
    int age;

public:
    // Parameterized constructor
    PERSON(string n, int a)
    {
        name = n;
        age = a;
    }

    // Overloading > operator
    void operator>(PERSON obj)
    {
        if (age > obj.age)
        {
            cout << "Elder Person: " << name << endl;
        }
        else if (age < obj.age)
        {
            cout << "Elder Person: " << obj.name << endl;
        }
        else
        {
            cout << "Both persons are of the same age." << endl;
        }
    }
};

int main()
{
    // Create two PERSON objects
    PERSON p1("Ram", 25);
    PERSON p2("Shyam", 30);

    // Use overloaded > operator
    p1 > p2;

    return 0;
}