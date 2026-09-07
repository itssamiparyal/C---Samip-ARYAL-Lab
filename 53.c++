//Lab1:Write a C++ program to create a base class Person having data members name and age. Derive a class Student having roll number and semester. Accept and display the complete details of the student.  
#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
{
public:
    string name;
    int age;

    // Function to display person's details
    void displayPerson()
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

// Derived class
class Student : public Person
{
public:
    int rollNo;
    int semester;

    // Function to display complete student details
    void displayStudent()
    {
        displayPerson();

        cout << "Roll No : " << rollNo << endl;
        cout << "Semester: " << semester << endl;
    }
};

int main()
{
    // Create an object of Student class
    Student s;

    // Accept input
    cout << "Enter Name: ";
    getline(cin, s.name);

    cout << "Enter Age: ";
    cin >> s.age;

    cout << "Enter Roll Number: ";
    cin >> s.rollNo;

    cout << "Enter Semester: ";
    cin >> s.semester;

    // Display output
    cout << "\n---- Student Details ----" << endl;
    s.displayStudent();

    return 0;
}