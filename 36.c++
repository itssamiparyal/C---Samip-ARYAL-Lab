//Write a C++ program to create a Passport class, initialize its data using a 
//parameterized constructor, and display the details using a const member function. 
#include <iostream>
#include <string>
using namespace std;

// Passport class
class Passport
{
public:
    string passportNumber;
    string name;
    string dateOfBirth;

    // Parameterized Constructor
    Passport(string pNo, string n, string dob)
    {
        passportNumber = pNo;
        name = n;
        dateOfBirth = dob;
    }

    // Const member function
    void display() const
    {
        cout << "\n------ Passport Details ------" << endl;
        cout << "Passport Number: " << passportNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Date of Birth: " << dateOfBirth << endl;
    }
};

int main()
{
    // Creating a constant object
    const Passport p1("NP123456", "Ram Sharma", "15-Jan-2000");

    // Calling const member function
    p1.display();

    // Not Allowed
    // p1.name = "Hari Sharma";   // Compilation Error

    return 0;
}