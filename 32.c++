//Write a C++ program to define a Student class, accept details of
// five students using a parameterized constructor, display their 
//information, and determine whether each student has passed or failed. 
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

    void display()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll: " << roll << endl;
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
    Student *s[5];

    int roll;
    string name;
    float marks;

    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter Details of Student " << i + 1 << endl;

        cout << "Enter Roll: ";
        cin >> roll;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;

        s[i] = new Student(roll, name, marks);
    }

    cout << "\n========== Student Details ==========\n";

    for (int i = 0; i < 5; i++)
    {
        s[i]->display();
        delete s[i];
    }

    return 0;
}