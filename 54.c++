// LAB:Write a C++ program to demonstrate single inheritance. Create a base class Employee containing employeeID and salary. Derive a class Manager containing department. Read the details of five managers and display all the information.
#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee
{
private:
    int employeeID;
    float salary;

public:
    // Setter method
    void setEmployeeData(int id, float sal)
    {
        employeeID = id;
        salary = sal;
    }

    // Display function
    void displayEmployee()
    {
        cout << "Employee ID : " << employeeID << endl;
        cout << "Salary      : " << salary << endl;
    }
};

// Derived class
class Manager : public Employee
{
private:
    string department;

public:
    // Setter method
    void setManagerData(string dept)
    {
        department = dept;
    }

    // Display function
    void displayManager()
    {
        displayEmployee();
        cout << "Department  : " << department << endl;
    }
};

int main()
{
    Manager m[5];
    int id;
    float salary;
    string dept;

    // Input details of five managers
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter details of Manager " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> id;

        cout << "Salary: ";
        cin >> salary;

        cout << "Department: ";
        cin >> dept;

        m[i].setEmployeeData(id, salary);
        m[i].setManagerData(dept);
    }

    // Display details
    cout << "\n===== Manager Details =====" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "\nManager " << i + 1 << endl;
        m[i].displayManager();
    }

    return 0;
}