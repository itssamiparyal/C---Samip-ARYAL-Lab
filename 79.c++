//File Input and Output Using ofstream and ifstream with Error Handling
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string data;

    // Create and open file for writing
    ofstream fout("data.txt");

    // Check if file opened successfully
    if (!fout.is_open())
    {
        cout << "Error creating file!" << endl;
        return 1;
    }

    // Write contents into the file
    fout << "Welcome to C++ File Handling." << endl;
    fout << "This is a simple text file." << endl;
    fout << "File handling is easy in C++." << endl;

    // Close the output file
    fout.close();

    cout << "File created and data written successfully." << endl;

    // Open the same file for reading
    ifstream fin("data.txt");

    // Check if file opened successfully
    if (!fin.is_open())
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "\nContents of the file:" << endl;

    // Read and display file contents
    while (getline(fin, data))
    {
        cout << data << endl;
    }

    // Check for reading errors
    if (fin.bad())
    {
        cout << "\nError occurred while reading the file!" << endl;
    }
    else if (fin.eof())
    {
        cout << "\nEnd of file reached." << endl;
    }

    // Close the input file
    fin.close();

    return 0;
}