//Write a C++ program to define a Student class with rollNo, name, and marks. 
//Create an object, input the student's details, display them, and determine
// whether the student has passed or failed (pass marks = 40) 
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    float marks;

    void display()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;

        if (marks >= 40)
        {
            cout << "Result: Pass" << endl;
        }
        else
        {
            cout << "Result: Fail" << endl;
        }
    }
};

int main()
{
    Student s;

    cout << "Enter Roll Number: ";
    cin >> s.rollNo;

    cin.ignore(); // Remove newline left in input buffer

    cout << "Enter Student Name: ";
    getline(cin, s.name);

    cout << "Enter Marks: ";
    cin >> s.marks;

    s.display();

    return 0;
}