//Lab:Write a program to define a class named Employee with data members name, age and gender. Then create another class named EmployeeSalary inherited from Employee. In this class, the user should give the monthly salary of the employee and calculate the yearly salary after 15% tax deduction. In the main function, you should get the employee’s basic information and salary using inheritance.
#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    int age;
    string gender;

    void getEmployee()
    {
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;

        cin.ignore();

        cout << "Enter Gender: ";
        getline(cin, gender);
    }
};

class EmployeeSalary : public Employee
{
public:
    float monthlySalary;
    float yearlySalary;

    void getSalary()
    {
        cout << "Enter Monthly Salary: ";
        cin >> monthlySalary;

        yearlySalary = monthlySalary * 12;
        yearlySalary = yearlySalary - (yearlySalary * 15 / 100);
    }

    void display()
    {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Name          : " << name << endl;
        cout << "Age           : " << age << endl;
        cout << "Gender        : " << gender << endl;
        cout << "Monthly Salary: " << monthlySalary << endl;
        cout << "Yearly Salary : " << yearlySalary << endl;
    }
};

int main()
{
    EmployeeSalary e;

    e.getEmployee();
    e.getSalary();
    e.display();

    return 0;
}