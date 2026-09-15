//Store Movies in Separate Comedy and Action Files Using a Class
#include <iostream>
#include <fstream>
using namespace std;

// Class to store movie details
class Movie
{
    string name;
    int year;

public:
    void input()
    {
        cout << "Enter movie name: ";
        getline(cin, name);

        cout << "Enter release year: ";
        cin >> year;
        cin.ignore();
    }

    void store(string filename)
    {
        ofstream fout(filename, ios::app);

        if (!fout.is_open())
        {
            cout << "Error opening file!" << endl;
            return;
        }

        fout << name << endl;
        fout << year << endl;

        fout.close();
    }
};

int main()
{
    Movie m;
    int choice;

    cout << "1. Comedy Movie" << endl;
    cout << "2. Action Movie" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore();

    m.input();

    if (choice == 1)
    {
        m.store("comedy.txt");
        cout << "Comedy movie stored successfully." << endl;
    }
    else if (choice == 2)
    {
        m.store("action.txt");
        cout << "Action movie stored successfully." << endl;
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}