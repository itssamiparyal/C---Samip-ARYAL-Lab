//Lab:Write a C++ program to demonstrate user-defined to user-defined conversion using a conversion function. Create classes MonthlySalary and AnnualSalary. Convert a MonthlySalary object into an AnnualSalary object and display the result.
#include <iostream>
using namespace std;

// Destination class
class AnnualSalary
{
public:
    int annual;

    // Parameterized constructor
    AnnualSalary(int a)
    {
        annual = a;
    }

    // Display function
    void display()
    {
        cout << "Annual Salary = " << annual << endl;
    }
};

// Source class
class MonthlySalary
{
public:
    int monthly;

    // Parameterized constructor
    MonthlySalary(int m)
    {
        monthly = m;
    }

    // Conversion function
    operator AnnualSalary()
    {
        return AnnualSalary(monthly * 12);
    }
};

int main()
{
    int salary;

    // User input
    cout << "Enter Monthly Salary: ";
    cin >> salary;

    // Creating MonthlySalary object
    MonthlySalary m1(salary);

    // MonthlySalary object converted into AnnualSalary object
    AnnualSalary a1 = m1;

    // Display result
    a1.display();

    return 0;
}