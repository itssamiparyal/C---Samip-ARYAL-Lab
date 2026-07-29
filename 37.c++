//Write a C++ program to create an Actor class and display the names of 
//actors whose rating is greater than 5 using a constant object. 
#include <iostream>
#include <string>
using namespace std;

// Actor Class
class Actor
{
public:
    string name;
    float rating;

    // Parameterized Constructor
    Actor(string n, float r)
    {
        name = n;
        rating = r;
    }

    // Const Member Function
    // Displays actor only if rating is greater than 5
    void display() const
    {
        if (rating > 5)
        {
            cout << "Actor Name: " << name << endl;
            cout << "Rating: " << rating << endl << endl;
        }
    }
};

int main()
{
    // Creating Constant Objects
    const Actor a1("Rajesh Hamal", 9.5);
    const Actor a2("Dayahang Rai", 9.2);
    const Actor a3("Anmol K.C.", 8.3);
    const Actor a4("Pradeep Khadka", 4.9);

    cout << "Actors having rating greater than 5\n\n";

    // Calling const member function
    a1.display();
    a2.display();
    a3.display();
    a4.display();

    // Not Allowed
    // a1.name = "Hari";
    // a1.rating = 10;

    return 0;
}