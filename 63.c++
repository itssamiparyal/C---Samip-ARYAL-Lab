//LAB:Write a C++ program to demonstrate the use of a constructor and destructor. Create a class BankAccount with data members accountHolder and balance. Use a parameterized constructor to initialize the account details and a destructor to display a message when the bank account object is destroyed. Define a member function to display the account details.

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountHolder;
    float balance;

public:
    // Parameterized constructor
    BankAccount(string name, float bal)
    {
        accountHolder = name;
        balance = bal;
        cout << "Bank account created." << endl;
    }

    // Member function
    void display()
    {
        cout << "\n--- Bank Account Details ---" << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Balance        : " << balance << endl;
    }

    // Destructor
    ~BankAccount()
    {
        cout << "\nBank account object destroyed." << endl;
    }
};

int main()
{
    string name;
    float balance;

    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Balance: ";
    cin >> balance;

    BankAccount b(name, balance);

    b.display();

    return 0;
}