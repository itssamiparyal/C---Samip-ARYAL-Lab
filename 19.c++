//Write a C++ program to simulate a simple ATM system using pass
// by reference. Allow the user to check the balance, deposit money, 
// and withdraw money, updating the account balance through reference. 
#include <iostream>
using namespace std;

// Function to deposit money
void deposit(float &balance, float amount)
{
    balance = balance + amount;
    cout << "Rs. " << amount << " deposited successfully." << endl;
}

// Function to withdraw money
void withdraw(float &balance, float amount)
{
    if (amount <= balance)
    {
        balance = balance - amount;
        cout << "Rs. " << amount << " withdrawn successfully." << endl;
    }
    else
    {
        cout << "Insufficient Balance!" << endl;
    }
}

// Function to display balance
void checkBalance(float &balance)
{
    cout << "Current Balance: Rs. " << balance << endl;
}

int main()
{
    float balance, amount;
    int choice;

    // User enters initial balance
    cout << "Enter Initial Balance: Rs. ";
    cin >> balance;

    cout << "\n========== ATM SYSTEM ==========" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;

    cout << "\nEnter Your Choice: ";
    cin >> choice;

    if (choice == 1)
    {
        checkBalance(balance);
    }
    else if (choice == 2)
    {
        cout << "Enter Deposit Amount: Rs. ";
        cin >> amount;

        deposit(balance, amount);

        cout << "Updated Balance: Rs. " << balance << endl;
    }
    else if (choice == 3)
    {
        cout << "Enter Withdrawal Amount: Rs. ";
        cin >> amount;

        withdraw(balance, amount);

        cout << "Updated Balance: Rs. " << balance << endl;
    }
    else
    {
        cout << "Invalid Choice!" << endl;
    }

    return 0;
}