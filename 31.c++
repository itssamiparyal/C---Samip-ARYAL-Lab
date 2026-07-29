//Write a C++ program to define a Student class, accept details of 
//five students, create objects using a parameterized constructor, 
//and display their details. 
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
        cout << "\nEnter details of Student " << i + 1 << endl;

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