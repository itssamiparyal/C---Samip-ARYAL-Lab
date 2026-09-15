//Read and Display Class 5 Students from a File
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    int rollNo;
    float marks;

    // Open file for reading
    ifstream fin("students.txt");

    if (!fin.is_open())
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "Class 5 Students:" << endl;

    // Read and display student details
    while (fin >> rollNo)
    {
        fin.ignore();
        getline(fin, name);
        fin >> marks;

        cout << "\nRoll No = " << rollNo << endl;
        cout << "Name = " << name << endl;
        cout << "Marks = " << marks << endl;
    }

    fin.close();

    return 0;
}