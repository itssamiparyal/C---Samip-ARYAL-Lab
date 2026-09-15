//Store and Display Five Student Names Using a File
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;

    // Create and open file for writing
    ofstream fout("students.txt");

    if (!fout.is_open())
    {
        cout << "Error creating file!" << endl;
        return 1;
    }

    // Store five student names
    cout << "Enter names of five students:" << endl;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Student " << i << ": ";
        getline(cin, name);
        fout << name << endl;
    }

    fout.close();

    cout << "\nNames stored successfully." << endl;

    // Open file for reading
    ifstream fin("students.txt");

    if (!fin.is_open())
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "\nStudent Names:" << endl;

    // Read and display five student names
    while (getline(fin, name))
    {
        cout << name << endl;
    }

    fin.close();

    return 0;
}