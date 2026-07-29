//Write a C++ program to define a BankAccount class, input account details, 
//display them, and check whether the minimum balance of Rs. 1000 is maintained. 
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
public:
    int accountNumber;
    string accountHolderName;
    float balance;

    void display()
    {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: Rs. " << balance << endl;

        if (balance >= 1000)
            cout << "Balance Status: Sufficient" << endl;
        else
            cout << "Balance Status: Insufficient (Minimum balance = Rs. 1000)" << endl;
    }
};

int main()
{
    BankAccount b;

    cout << "Enter Account Number: ";
    cin >> b.accountNumber;

    cin.ignore();

    cout << "Enter Account Holder Name: ";
    getline(cin, b.accountHolderName);

    cout << "Enter Balance: Rs. ";
    cin >> b.balance;

    b.display();

    return 0;
}