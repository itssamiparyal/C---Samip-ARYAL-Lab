//Write a C++ program to define an ElectricityBill class, input consumer details, 
//and calculate the electricity bill at Rs. 8 per unit. 
#include <iostream>
#include <string>
using namespace std;

class ElectricityBill
{
public:
    string consumerName;
    int consumerId;
    int unitsConsumed;

    void display()
    {
        cout << "\n--- Consumer Details ---" << endl;
        cout << "Consumer ID: " << consumerId << endl;
        cout << "Consumer Name: " << consumerName << endl;
        cout << "Units Consumed: " << unitsConsumed << endl;
    }

    void calculateBill()
    {
        float bill = unitsConsumed * 8;
        cout << "Electricity Bill: Rs. " << bill << endl;
    }
};

int main()
{
    ElectricityBill e;

    cout << "Enter Consumer ID: ";
    cin >> e.consumerId;

    cin.ignore();

    cout << "Enter Consumer Name: ";
    getline(cin, e.consumerName);

    cout << "Enter Units Consumed: ";
    cin >> e.unitsConsumed;

    e.display();
    e.calculateBill();

    return 0;
}