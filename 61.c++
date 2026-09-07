//Lab:Write a C++ program to demonstrate private inheritance. Create a base class BankAccount with data members accountNo and balance. Derive a class ATM using private inheritance. Accept account details in the main() function and display them using public member functions of the derived class. Also demonstrate why the inherited data members cannot be accessed directly from the main() function.
#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNo;
    float balance;

public:
    void setAccount(int acc, float bal)
    {
        accountNo = acc;
        balance = bal;
    }

    void displayAccount()
    {
        cout << "Account Number : " << accountNo << endl;
        cout << "Balance        : " << balance << endl;
    }
};

class ATM : private BankAccount
{
public:
    void getAccountDetails()
    {
        int acc;
        float bal;

        cout << "Enter Account Number: ";
        cin >> acc;

        cout << "Enter Balance: ";
        cin >> bal;

        setAccount(acc, bal);
    }

    void display()
    {
        cout << "\n--- Account Details ---" << endl;
        displayAccount();
    }
};

int main()
{
    ATM a;

    a.getAccountDetails();
    a.display();

    // The following statements are not allowed:
    // a.accountNo = 101;
    // a.balance = 50000;
    // a.setAccount(101, 50000);

    return 0;
}