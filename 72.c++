//Lab: Count employees using static data member and static member function.

#include <iostream>
using namespace std;

class Employee
{
private:
    int employeeID;
    static int count;

public:
    Employee(int id)
    {
        employeeID = id;
        count++;
    }

    void display()
    {
        cout << "Employee ID: " << employeeID << endl;
    }

    static void displayCount()
    {
        cout << "Total Employees = " << count << endl;
    }
};

int Employee::count = 0;

int main()
{
    Employee e1(101);
    Employee e2(102);
    Employee e3(103);
    Employee e4(104);

    e1.display();
    e2.display();
    e3.display();
    e4.display();

    Employee::displayCount();

    return 0;
}