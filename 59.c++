//Lab:Write a C++ program to demonstrate hybrid inheritance. Create a base class Person containing name and age. Derive classes Student and Teacher from Person. Create a class TeachingAssistant that inherits from both Student and Teacher and contains assistantID. Accept and display the complete details of a teaching assistant.
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void setPerson(string n, int a)
    {
        name = n;
        age = a;
    }
};

class Student : virtual public Person
{
public:
    int rollNo;
    int semester;

    void setStudent(int r, int s)
    {
        rollNo = r;
        semester = s;
    }
};

class Teacher : virtual public Person
{
public:
    string subject;
    float salary;

    void setTeacher(string sub, float sal)
    {
        subject = sub;
        salary = sal;
    }
};

class TeachingAssistant : public Student, public Teacher
{
public:
    int assistantID;

    void display()
    {
        cout << "\n--- Teaching Assistant Details ---" << endl;
        cout << "Name        : " << name << endl;
        cout << "Age         : " << age << endl;
        cout << "Roll No     : " << rollNo << endl;
        cout << "Semester    : " << semester << endl;
        cout << "Subject     : " << subject << endl;
        cout << "Salary      : " << salary << endl;
        cout << "Assistant ID: " << assistantID << endl;
    }
};

int main()
{
    TeachingAssistant t;

    cout << "Enter Name: ";
    getline(cin, t.name);

    cout << "Enter Age: ";
    cin >> t.age;

    cout << "Enter Roll No: ";
    cin >> t.rollNo;

    cout << "Enter Semester: ";
    cin >> t.semester;

    cin.ignore();

    cout << "Enter Subject: ";
    getline(cin, t.subject);

    cout << "Enter Salary: ";
    cin >> t.salary;

    cout << "Enter Assistant ID: ";
    cin >> t.assistantID;

    t.display();

    return 0;
}