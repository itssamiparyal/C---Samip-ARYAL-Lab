//Lab: Demonstrate runtime polymorphism using virtual functions.
#include <iostream>
#include <string>
using namespace std;

class Payment
{
public:
    virtual void pay()
    {
        cout << "Payment processing..." << endl;
    }
};

class CreditCard : public Payment
{
public:
    void pay()
    {
        cout << "Payment made using Credit Card." << endl;
    }
};

class eSewa : public Payment
{
public:
    void pay()
    {
        cout << "Payment made using eSewa." << endl;
    }
};

class Khalti : public Payment
{
public:
    void pay()
    {
        cout << "Payment made using Khalti." << endl;
    }
};

int main()
{
    Payment *p;

    CreditCard c;
    eSewa e;
    Khalti k;

    p = &c;
    p->pay();

    p = &e;
    p->pay();

    p = &k;
    p->pay();

    return 0;
}