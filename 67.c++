// Lab: Demonstrate abstract class and pure virtual function
// using SavingAccount and CurrentAccount.

#include <iostream>
using namespace std;

// Abstract base class
class BankAccount
{
public:
    virtual void display() = 0;
};

// Derived class
class SavingAccount : public BankAccount
{
public:
    void display()
    {
        cout << "Saving Account" << endl;
        cout << "Interest is provided on savings." << endl;
    }
};

// Derived class
class CurrentAccount : public BankAccount
{
public:
    void display()
    {
        cout << "Current Account" << endl;
        cout << "Suitable for regular transactions." << endl;
    }
};

int main()
{
    BankAccount *b;

    SavingAccount s;
    CurrentAccount c;

    b = &s;
    b->display();

    cout << endl;

    b = &c;
    b->display();

    return 0;
}

