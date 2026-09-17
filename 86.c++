// Lab: Store Student Records and Display the Student with the Highest Marks

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

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

    void writeToFile(ofstream &fout)
    {
        fout << rollNo << endl;
        fout << name << endl;
        fout << marks << endl;
    }

    void display()
    {
        cout << "\nRoll No = " << rollNo << endl;
        cout << "Student Name = " << name << endl;
        cout << "Marks = " << marks << endl;
    }

    static void findHighest()
    {
        ifstream fin("studentHighest.txt");

        if (!fin.is_open())
        {
            cout << "Error opening file!" << endl;
            return;
        }

        Student highest;
        bool found = false;

        int r;
        string n;
        float m;

        while (fin >> r)
        {
            fin.ignore();
            getline(fin, n);
            fin >> m;

            if (!found || m > highest.marks)
            {
                highest.rollNo = r;
                highest.name = n;
                highest.marks = m;
                found = true;
            }
        }

        fin.close();

        if (!found)
        {
            cout << "No student records found!" << endl;
            return;
        }

        cout << "\nStudent with Highest Marks:" << endl;
        highest.display();
    }
};

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Create/overwrite studentHighest.txt
    ofstream fout("studentHighest.txt");

    if (!fout.is_open())
    {
        cout << "Error creating file!" << endl;
        return 1;
    }

    Student s;

    for (int i = 1; i <= n; i++)
    {
        cout << "\nEnter details of Student " << i << ":" << endl;

        s.input();
        s.writeToFile(fout);
    }

    fout.close();

    // Find student with highest marks
    Student::findHighest();

    return 0;
}



