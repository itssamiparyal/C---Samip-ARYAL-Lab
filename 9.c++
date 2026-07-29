//ATM Management System Using Switch Statement in C++
#include <iostream>
using namespace std;

int main()
{
    int choice;
    float balance = 5000, amount;

    cout << "ATM MENU\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "Enter Choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Current Balance: Rs. " << balance;
            break;

        case 2:
            cout << "Enter Deposit Amount: ";
            cin >> amount;
            balance = balance + amount;
            cout << "Money Deposited Successfully.\n";
            cout << "Updated Balance: Rs. " << balance;
            break;

        case 3:
            cout << "Enter Withdraw Amount: ";
            cin >> amount;

            if (amount <= balance)
            {
                balance = balance - amount;
                cout << "Money Withdrawn Successfully.\n";
                cout << "Updated Balance: Rs. " << balance;
            }
            else
            {
                cout << "Insufficient Balance.";
            }
            break;

        default:
            cout << "Invalid Choice.";
    }

    return 0;
}