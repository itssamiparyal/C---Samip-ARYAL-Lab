//Runtime Polymorphism Using Virtual Functions: SavingAccount and CurrentAccount
#include <iostream>
using namespace std;

class BankAccount
{
public:
    virtual void display()
    {
        cout << "Bank Account" << endl;
    }
};

class SavingAccount : public BankAccount
{
public:
    void display()
    {
        cout << "Saving Account" << endl;
        cout << "Interest is provided on savings." << endl;
    }
};

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