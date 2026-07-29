//Write a C++ program to create an Employee class with static data members to 
//demonstrate that company information is shared by all objects. 
#include <iostream>
#include <string>
using namespace std;

// Employee Class
class Employee
{
public:
    int employeeId;
    string employeeName;
    float salary;

    // Static data members
    static string companyName;
    static string ceoName;

    // Display function
    void display()
    {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Salary: Rs. " << salary << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "CEO Name: " << ceoName << endl;
    }
};

// Definition of static data members
string Employee::companyName;
string Employee::ceoName;

int main()
{
    Employee emp[5];

    // Input static data members only once
    cout << "Enter Company Name: ";
    getline(cin, Employee::companyName);

    cout << "Enter CEO Name: ";
    getline(cin, Employee::ceoName);

    // Input details of 5 employees
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter Details of Employee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> emp[i].employeeId;

        cin.ignore();

        cout << "Employee Name: ";
        getline(cin, emp[i].employeeName);

        cout << "Salary: ";
        cin >> emp[i].salary;

        cin.ignore();
    }

    // Display all employee details
    cout << "\n========== Employee Details ==========\n";

    for (int i = 0; i < 5; i++)
    {
        emp[i].display();
    }

    return 0;
}