// Lab: Demonstrate the this pointer using a Student class.

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;

public:
    // Set student data using this pointer
    void setData(string name, int rollNo)
    {
        this->name = name;
        this->rollNo = rollNo;
    }

    // Display student data
    void display()
    {
        cout << "Student Name : " << this->name << endl;
        cout << "Roll Number  : " << this->rollNo << endl;
    }
};

int main()
{
    Student s;

    string name;
    int rollNo;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    s.setData(name, rollNo);

    cout << "\n--- Student Details ---" << endl;
    s.display();

    return 0;
}
