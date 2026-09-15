//Store Employee Records and Display Employees with Salary Greater Than 50,000
#include <iostream>
#include <fstream>
using namespace std;

// Class to store employee details
class Employee
{
    int id;
    string name;
    float salary;

public:
    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void writeToFile()
    {
        ofstream fout("employees.txt", ios::app);

        if (!fout.is_open())
        {
            cout << "Error opening file!" << endl;
            return;
        }

        fout << id << endl;
        fout << name << endl;
        fout << salary << endl;

        fout.close();
    }

    void display()
    {
        cout << "\nEmployee ID = " << id << endl;
        cout << "Employee Name = " << name << endl;
        cout << "Salary = " << salary << endl;
    }

    float getSalary()
    {
        return salary;
    }

    void readFromFile()
    {
        ifstream fin("employees.txt");

        if (!fin.is_open())
        {
            cout << "Error opening file!" << endl;
            return;
        }

        cout << "\nEmployees with Salary Greater Than 50000:" << endl;

        while (fin >> id)
        {
            fin.ignore();
            getline(fin, name);
            fin >> salary;

            if (salary > 50000)
            {
                display();
            }
        }

        fin.close();
    }
};

int main()
{
    Employee e;
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    // Store employee records
    for (int i = 1; i <= n; i++)
    {
        cout << "\nEnter details of Employee " << i << ":" << endl;
        e.input();
        e.writeToFile();
    }

    // Read and display employees with salary > 50000
    e.readFromFile();

    return 0;
}