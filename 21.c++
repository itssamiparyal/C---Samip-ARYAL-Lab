//Write a C++ program to define a Student class with rollNo, name, and marks. 
//Create an array of 5 objects, input their details, display them, and determine 
//whether each student has passed or failed. 
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
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main()
{
    Student s[5];

    cout << "Enter details of 5 students:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enter Roll Number: ";
        cin >> s[i].rollNo;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, s[i].name);

        cout << "Enter Marks: ";
        cin >> s[i].marks;
    }

    cout << "\n========== Student Details ==========\n";

    for (int i = 0; i < 5; i++)
    {
        s[i].display();
    }

    return 0;
}