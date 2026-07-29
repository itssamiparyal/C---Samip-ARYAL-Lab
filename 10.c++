//Restaurant Billing System with Discount Calculation Using Switch Statement in C++
#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance = 5000.0, amount;

    cout << "=====================================\n";
    cout << "          ATM MANAGEMENT SYSTEM\n";
    cout << "=====================================\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "=====================================\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "\n-------------------------------------\n";
            cout << "Current Balance: Rs. "<< balance << endl;
            cout << "-------------------------------------\n";
            break;

        case 2:
            cout << "\nEnter deposit amount: Rs. ";
            cin >> amount;

            if (amount > 0) {
                balance += amount;
                cout << "\nTransaction Successful!\n";
                cout << "Deposited Amount : Rs. " << amount << endl;
                cout << "Updated Balance  : Rs. " << balance << endl;
            } else {
                cout << "\nError: Deposit amount must be greater than 0.\n";
            }
            break;

        case 3:
            cout << "\nEnter withdrawal amount: Rs. ";
            cin >> amount;

            if (amount <= 0) {
                cout << "\nError: Withdrawal amount must be greater than 0.\n";
            }
            else if (amount > balance) {
                cout << "\nTransaction Failed!\n";
                cout << "Insufficient Balance.\n";
                cout << "Available Balance: Rs. " << balance << endl;
            }
            else {
                balance -= amount;
                cout << "\nTransaction Successful!\n";
                cout << "Withdrawn Amount : Rs. " << amount << endl;
                cout << "Remaining Balance: Rs. " << balance << endl;
            }
            break;

        default:
            cout << "\nInvalid Choice! Please select a valid option.\n";
    }

    cout << "\n=====================================\n";
    cout << "      Thank You For Banking With Us\n";
    cout << "=====================================\n";

    return 0;
}