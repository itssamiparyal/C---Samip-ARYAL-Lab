// Lab 1: Program to demonstrate inheritance using Person and Student

#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
{
public:
    string name;
    int age;

    void displayPerson()
    {
        cout << "Name      : " << name << endl;
        cout << "Age       : " << age << endl;
    }
};

// Derived class
class Student : public Person
{
public:
    int rollNo;
    int semester;

    void displayStudent()
    {
        displayPerson();

        cout << "Roll No   : " << rollNo << endl;
        cout << "Semester  : " << semester << endl;
    }
};

int main()
{
    Student s;

    // Accept student details
    cout << "Enter Name: ";
    getline(cin, s.name);

    cout << "Enter Age: ";
    cin >> s.age;

    cout << "Enter Roll Number: ";
    cin >> s.rollNo;

    cout << "Enter Semester: ";
    cin >> s.semester;

    // Display student details
    cout << "\n---- Student Details ----" << endl;
    s.displayStudent();

    return 0;
}

