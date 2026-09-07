//Lab:Write a C++ program to demonstrate hierarchical inheritance. Create a base class Person containing the data members name and age. Derive two classes, Student containing rollNo and semester, and Teacher containing subject and salary. Accept and display the details of a student and a teacher.

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

class Student : public Person
{
public:
    int rollNo;
    int semester;

    void setStudent(int r, int s)
    {
        rollNo = r;
        semester = s;
    }

    void display()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name     : " << name << endl;
        cout << "Age      : " << age << endl;
        cout << "Roll No  : " << rollNo << endl;
        cout << "Semester : " << semester << endl;
    }
};

class Teacher : public Person
{
public:
    string subject;
    float salary;

    void setTeacher(string sub, float sal)
    {
        subject = sub;
        salary = sal;
    }

    void display()
    {
        cout << "\n--- Teacher Details ---" << endl;
        cout << "Name    : " << name << endl;
        cout << "Age     : " << age << endl;
        cout << "Subject : " << subject << endl;
        cout << "Salary  : " << salary << endl;
    }
};

int main()
{
    Student s;
    Teacher t;

    cout << "Enter Student Details" << endl;

    cout << "Name: ";
    getline(cin, s.name);

    cout << "Age: ";
    cin >> s.age;

    cout << "Roll No: ";
    cin >> s.rollNo;

    cout << "Semester: ";
    cin >> s.semester;

    cin.ignore();

    cout << "\nEnter Teacher Details" << endl;

    cout << "Name: ";
    getline(cin, t.name);

    cout << "Age: ";
    cin >> t.age;

    cin.ignore();

    cout << "Subject: ";
    getline(cin, t.subject);

    cout << "Salary: ";
    cin >> t.salary;

    s.display();
    t.display();

    return 0;
}