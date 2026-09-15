//Store and Display Student Name and Marks Using a Class and File
#include <iostream>
#include <fstream>
using namespace std;

// Class to store student details
class Student
{
    string name;
    float marks;

public:
    void input()
    {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter marks: ";
        cin >> marks;
    }

    void writeToFile()
    {
        ofstream fout("student.txt");

        if (!fout.is_open())
        {
            cout << "Error creating file!" << endl;
            return;
        }

        fout << name << endl;
        fout << marks << endl;

        fout.close();
    }

    void readFromFile()
    {
        ifstream fin("student.txt");

        if (!fin.is_open())
        {
            cout << "Error opening file!" << endl;
            return;
        }

        getline(fin, name);
        fin >> marks;

        fin.close();
    }

    void display()
    {
        cout << "\nStudent Name = " << name << endl;
        cout << "Marks = " << marks << endl;
    }
};

int main()
{
    Student s;

    // Input student details
    s.input();

    // Write details to file
    s.writeToFile();

    cout << "\nStudent details stored successfully." << endl;

    // Read details from file
    s.readFromFile();

    // Display details
    s.display();

    return 0;
}