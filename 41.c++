//Write a C++ program to create a BankAccount class with static 
//data members to demonstrate that bank information is shared by all 
//customer objects. 
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
public:
    int accountNumber;
    string customerName;
    float balance;

    // Static data members
    static string bankName;
    static float interestRate;

    void display()
    {
        cout << "\n--- Customer Details ---" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Balance: Rs. " << balance << endl;
        cout << "Bank Name: " << bankName << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

// Definition of static data members
string BankAccount::bankName;
float BankAccount::interestRate;

int main()
{
    BankAccount customer[5];

    // Input static data members only once
    cout << "Enter Bank Name: ";
    getline(cin, BankAccount::bankName);

    cout << "Enter Interest Rate (%): ";
    cin >> BankAccount::interestRate;

    cin.ignore();

    // Input details of 5 customers
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter Details of Customer " << i + 1 << endl;

        cout << "Account Number: ";
        cin >> customer[i].accountNumber;

        cin.ignore();

        cout << "Customer Name: ";
        getline(cin, customer[i].customerName);

        cout << "Balance: ";
        cin >> customer[i].balance;

        cin.ignore();
    }

    // Display all customer details
    cout << "\n========== Customer Details ==========\n";

    for (int i = 0; i < 5; i++)
    {
        customer[i].display();
    }

    return 0;
}