//Write a C++ program to define an Employee class using a 
//default constructor to initialize the designation as "Trainee" 
// and salary as Rs. 25,000. 
#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    int employeeId;
    string employeeName;
    string designation;
    float salary;

    // Default constructor
    Employee()
    {
        designation = "Trainee";
        salary = 25000;
    }

    void display()
    {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Designation: " << designation << endl;
        cout << "Salary: Rs. " << salary << endl;
    }
};

int main()
{
    Employee e;

    cout << "Enter Employee ID: ";
    cin >> e.employeeId;

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, e.employeeName);

    e.display();

    return 0;
}