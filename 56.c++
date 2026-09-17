//Lab:Write a C++ program to implement multiple inheritance. Create a base class Customer containing customerName. Create another base class Loan containing loanAmount. Derive a class LoanAccount containing interestRate. Read the details of five customers and display all the information.
//Lab: Implement multiple inheritance using Customer, Loan and LoanAccount.

#include <iostream>
#include <string>
using namespace std;

// Base class 1
class Customer
{
public:
    string customerName;

    void setCustomer(string name)
    {
        customerName = name;
    }
};

// Base class 2
class Loan
{
public:
    float loanAmount;

    void setLoan(float amount)
    {
        loanAmount = amount;
    }
};

// Derived class
class LoanAccount : public Customer, public Loan
{
public:
    float interestRate;

    void setInterest(float rate)
    {
        interestRate = rate;
    }

    void display()
    {
        cout << "Customer Name : " << customerName << endl;
        cout << "Loan Amount   : " << loanAmount << endl;
        cout << "Interest Rate : " << interestRate << "%" << endl;
    }
};

int main()
{
    LoanAccount l[5];

    string name;
    float amount, rate;

    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter details of Customer " << i + 1 << endl;

        cout << "Customer Name: ";
        cin >> name;

        cout << "Loan Amunt: ";
        cin >> amount;

        cout << "Interest Rate: ";
        cin >> rate;

        l[i].setCustomer(name);
        l[i].setLoan(amount);
        l[i].setInterest(rate);
    }

    cout << "\n===== Loan Account Details =====" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "\nCustomer " << i + 1 << endl;
        l[i].display();
    }

    return 0;
}