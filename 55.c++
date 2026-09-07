//Lab:Write a C++ program to implement multiple inheritance. Create two base classes: Teacher with the data member subject and Researcher with the data member researchArea. Derive a class Professor that inherits from both base classes and contains the data member name. Read the professor's details from the user and display all the information.
#include <iostream>
#include <string>
using namespace std;

// Base class 1
class Teacher
{
public:
    string subject;

    void setSubject(string s)
    {
        subject = s;
    }
};

// Base class 2
class Researcher
{
public:
    string researchArea;

    void setResearchArea(string r)
    {
        researchArea = r;
    }
};

// Derived class
class Professor : public Teacher, public Researcher
{
public:
    string name;

    void setName(string n)
    {
        name = n;
    }

    void display()
    {
        cout << "\n--- Professor Details ---" << endl;
        cout << "Name          : " << name << endl;
        cout << "Subject       : " << subject << endl;
        cout << "Research Area : " << researchArea << endl;
    }
};

int main()
{
    Professor p;

    cout << "Enter Professor Name: ";
    getline(cin, p.name);

    cout << "Enter Subject: ";
    getline(cin, p.subject);

    cout << "Enter Research Area: ";
    getline(cin, p.researchArea);

    p.display();

    return 0;
}