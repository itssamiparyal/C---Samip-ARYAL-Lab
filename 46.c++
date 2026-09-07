// Lab: Convert total minutes into Time using a conversion constructor.

#include <iostream>
using namespace std;

class TIME
{
public:
    int hour;
    int minute;

    // Parameterized constructor for basic to user-defined conversion
    TIME(int totalMinutes)
    {
        hour = totalMinutes / 60;
        minute = totalMinutes % 60;
    }

    // Display function
    void display()
    {
        cout << "Hour = " << hour << endl;
        cout << "Minute = " << minute << endl;
    }
};

int main()
{
    int totalMinutes;

    cout << "Enter total minutes: ";
    cin >> totalMinutes;

    // Basic type (int) converted to TIME object
    TIME t = totalMinutes;

    cout << "\nConverted Time:" << endl;
    t.display();

    return 0;
}