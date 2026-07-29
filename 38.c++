//Write a C++ program to create a BankAccount class and pass an object to a function 
//to display the account details. 
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
public:
    int accountNumber;
    string accountHolder;
    float balance;

    // Parameterized Constructor
    BankAccount(int accNo, string name, float bal)
    {
        accountNumber = accNo;
        accountHolder = name;
        balance = bal;
    }
};

// Function receiving object as argument
void displayAccount(BankAccount acc)
{
    cout << "\n--- Account Details ---" << endl;
    cout << "Account Number: " << acc.accountNumber << endl;
    cout << "Account Holder: " << acc.accountHolder << endl;
    cout << "Balance: Rs. " << acc.balance << endl;
}

int main()
{
    int accNo;
    string name;
    float bal;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cin.ignore();

    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Balance: ";
    cin >> bal;

    // Create object using parameterized constructor
    BankAccount customer(accNo, name, bal);

    // Pass object to function
    displayAccount(customer);

    return 0;
}