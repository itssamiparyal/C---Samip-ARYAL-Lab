//Write a C++ program to define a Student class using a 
//parameterized constructor and a copy constructor to create and 
//display a copy of an existing student object. 
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    float marks;

    // Parameterized constructor
    Student(int r, string n, float m)
    {
        roll = r;
        name = n;
        marks = m;
    }

    // Copy constructor
    Student(const Student &s)
    {
        roll = s.roll;
        name = s.name;
        marks = s.marks;
    }

    void display()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1(101, "Ram Sharma", 85);
    Student s2 = s1;   // Copy constructor called

    cout << "Original Student:" << endl;
    s1.display();

    cout << "\nCopied Student:" << endl;
    s2.display();

    return 0;
}