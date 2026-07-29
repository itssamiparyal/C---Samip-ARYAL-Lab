//Write a C++ program to define a Hotel class, input booking details, 
//display them, and calculate the total room charge at Rs. 2500 per day. 
#include <iostream>
#include <string>
using namespace std;

class Hotel
{
public:
    string customerName;
    int roomNumber;
    int numberOfDays;

    void display()
    {
        cout << "\n--- Booking Details ---" << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Room Number: " << roomNumber << endl;
        cout << "Number of Days: " << numberOfDays << endl;

        float totalCharge = numberOfDays * 2500;
        cout << "Total Room Charge: Rs. " << totalCharge << endl;
    }
};

int main()
{
    Hotel h;

    cout << "Enter Customer Name: ";
    getline(cin, h.customerName);

    cout << "Enter Room Number: ";
    cin >> h.roomNumber;

    cout << "Enter Number of Days: ";
    cin >> h.numberOfDays;

    h.display();

    return 0;
}