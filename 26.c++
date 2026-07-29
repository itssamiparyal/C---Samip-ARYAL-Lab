//Write a C++ program to define a Patient class, input patient details, 
//display them, and determine whether the patient is eligible
// for a senior citizen discount (age ≥ 60). 
#include <iostream>
#include <string>
using namespace std;

class Patient
{
public:
    int patientId;
    string patientName;
    int age;

    void display()
    {
        cout << "\n--- Patient Details ---" << endl;
        cout << "Patient ID: " << patientId << endl;
        cout << "Patient Name: " << patientName << endl;
        cout << "Age: " << age << endl;

        if (age >= 60)
            cout << "Eligible for Senior Citizen Discount" << endl;
        else
            cout << "Not Eligible for Senior Citizen Discount" << endl;
    }
};

int main()
{
    Patient p;

    cout << "Enter Patient ID: ";
    cin >> p.patientId;

    cin.ignore();

    cout << "Enter Patient Name: ";
    getline(cin, p.patientName);

    cout << "Enter Age: ";
    cin >> p.age;

    p.display();

    return 0;
}