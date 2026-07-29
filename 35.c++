//Write a C++ program to create five student objects using a parameterized constructor, 
//create copies using a copy constructor, and display both the original and 
//copied objects. 
#include <iostream>
#include <string>
using namespace std;

// Define Student class
class Student
{
public:
    int roll;
    string name;
    float marks;

    // Default Constructor
    Student()
    {
        roll = 0;
        name = "";
        marks = 0;
    }

    // Parameterized Constructor
    Student(int r, string n, float m)
    {
        roll = r;
        name = n;
        marks = m;
    }

    // Copy Constructor
    Student(const Student &s)
    {
        roll = s.roll;
        name = s.name;
        marks = s.marks;
    }

    // Display Function
    void display()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    int roll;
    string name;
    float marks;

    // Arrays of Student objects
    Student original[5];
    Student copied[5];

    // Input details and create original & copied objects
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter Details of Student " << i + 1 << endl;

        cout << "Enter Roll Number: ";
        cin >> roll;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;

        // Create original object using parameterized constructor
        original[i] = Student(roll, name, marks);

        // Create copied object using copy constructor
        copied[i] = Student(original[i]);
    }

    // Display original student details
    cout << "\n========== Original Student Details ==========" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        original[i].display();
    }

    // Display copied student details
    cout << "\n========== Copied Student Details ==========" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        copied[i].display();
    }

    return 0;
}