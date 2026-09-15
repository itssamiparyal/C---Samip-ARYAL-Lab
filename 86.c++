//Store Student Records and Display the Student with the Highest Marks
#include <iostream>
#include <fstream>
using namespace std;

// Class to store student details
class Student
{
    int rollNo;
    string name;
    float marks;

public:
    void input()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void writeToFile()
    {
        ofstream fout("students.txt", ios::app);

        if (!fout.is_open())
        {
            cout << "Error opening file!" << endl;
            return;
        }

        fout << rollNo << endl;
        fout << name << endl;
        fout << marks << endl;

        fout.close();
    }

    void display()
    {
        cout << "\nRoll No = " << rollNo << endl;
        cout << "Student Name = " << name << endl;
        cout << "Marks = " << marks << endl;
    }

    void findHighest()
    {
        ifstream fin("students.txt");

        if (!fin.is_open())
        {
            cout << "Error opening file!" << endl;
            return;
        }

        Student highest;
        bool first = true;

        while (fin >> rollNo)
        {
            fin.ignore();
            getline(fin, name);
            fin >> marks;

            if (first || marks > highest.marks)
            {
                highest.rollNo = rollNo;
                highest.name = name;
                highest.marks = marks;
                first = false;
            }
        }

        fin.close();

        cout << "\nStudent with Highest Marks:" << endl;
        highest.display();
    }
};

int main()
{
    Student s;
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Store student records
    for (int i = 1; i <= n; i++)
    {
        cout << "\nEnter details of Student " << i << ":" << endl;
        s.input();
        s.writeToFile();
    }

    // Find and display student with highest marks
    s.findHighest();

    return 0;
}