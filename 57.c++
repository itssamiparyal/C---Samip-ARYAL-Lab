//LAB:Write a C++ program to demonstrate multilevel inheritance. Create a base class Person containing name and age. Derive a class Employee containing employeeID and salary. Further derive a class Manager containing department. Read and display the complete details of the manager.
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

class Employee : public Person
{
public:
    int employeeID;
    float salary;

    void setEmployee(int id, float sal)
    {
        employeeID = id;
        salary = sal;
    }
};

class Manager : public Employee
{
public:
    string department;

    void setManager(string dept)
    {
        department = dept;
    }

    void display()
    {
        cout << "\n--- Manager Details ---" << endl;
        cout << "Name        : " << name << endl;
        cout << "Age         : " << age << endl;
        cout << "Employee ID : " << employeeID << endl;
        cout << "Salary      : " << salary << endl;
        cout << "Department  : " << department << endl;
    }
};

int main()
{
    Manager m;

    cout << "Enter Name: ";
    getline(cin, m.name);

    cout << "Enter Age: ";
    cin >> m.age;

    cout << "Enter Employee ID: ";
    cin >> m.employeeID;

    cout << "Enter Salary: ";
    cin >> m.salary;

    cin.ignore();

    cout << "Enter Department: ";
    getline(cin, m.department);

    m.display();

    return 0;
}