//Runtime Polymorphism Using Virtual Functions: Employee, Manager and Developer
#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;

    Employee(string n)
    {
        name = n;
    }

    virtual void display()
    {
        cout << "Employee Name: " << name << endl;
    }
};

class Manager : public Employee
{
public:
    string department;

    Manager(string n, string d) : Employee(n)
    {
        department = d;
    }

    void display()
    {
        cout << "\n--- Manager Details ---" << endl;
        cout << "Name       : " << name << endl;
        cout << "Department : " << department << endl;
    }
};

class Developer : public Employee
{
public:
    string language;

    Developer(string n, string l) : Employee(n)
    {
        language = l;
    }

    void display()
    {
        cout << "\n--- Developer Details ---" << endl;
        cout << "Name     : " << name << endl;
        cout << "Language : " << language << endl;
    }
};

int main()
{
    Employee *e;

    Manager m("Ramesh", "IT");
    Developer d("Sita", "C++");

    e = &m;
    e->display();

    e = &d;
    e->display();

    return 0;
}