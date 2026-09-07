//Lab: Write a C++ program to demonstrate aggregation by creating a class Department that has a Teacher object. The Teacher class should contain name and subject. Accept and display the teacher details.
#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    string name;
    string subject;

    void getTeacher()
    {
        cout << "Enter Teacher Name: ";
        getline(cin, name);

        cout << "Enter Subject: ";
        getline(cin, subject);
    }

    void displayTeacher()
    {
        cout << "\n--- Teacher Details ---" << endl;
        cout << "Name    : " << name << endl;
        cout << "Subject : " << subject << endl;
    }
};

class Department
{
public:
    Teacher teacher;

    void getDetails()
    {
        teacher.getTeacher();
    }

    void display()
    {
        teacher.displayTeacher();
    }
};

int main()
{
    Department d;

    d.getDetails();
    d.display();

    return 0;
}