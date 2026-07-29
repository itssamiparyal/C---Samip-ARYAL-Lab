//Write a C++ program to define a Student class and create three 
//objects using a parameterized constructor.
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
    Student s1(101, "Ram Sharma", 85);
    Student s2(102, "Sita Karki", 78);
    Student s3(103, "Hari Thapa", 92);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}