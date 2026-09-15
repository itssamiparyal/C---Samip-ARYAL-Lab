//Write and Read a Student's Name Using File Streams
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;

    // Write student's name into the file
    ofstream fout("student.txt");

    if (!fout.is_open())
    {
        cout << "Error creating file!" << endl;
        return 1;
    }

    cout << "Enter student's name: ";
    getline(cin, name);

    fout << name;
    fout.close();

    cout << "Name written to file successfully." << endl;

    // Read student's name from the file
    ifstream fin("student.txt");

    if (!fin.is_open())
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    getline(fin, name);

    cout << "Student's Name = " << name << endl;

    fin.close();

    return 0;
}