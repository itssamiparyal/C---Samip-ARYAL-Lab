////Lab: Add two Distance objects using binary + operator overloading and friend function.

#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inch;

public:
    void getDistance()
    {
        cout << "Enter feet: ";
        cin >> feet;

        cout << "Enter inch: ";
        cin >> inch;
    }

    void display()
    {
        cout << "Distance = " << feet << " feet " << inch << " inches" << endl;
    }

    friend Distance operator+(Distance d1, Distance d2);
};

Distance operator+(Distance d1, Distance d2)
{
    Distance d3;

    d3.feet = d1.feet + d2.feet;
    d3.inch = d1.inch + d2.inch;

    if (d3.inch >= 12)
    {
        d3.feet = d3.feet + d3.inch / 12;
        d3.inch = d3.inch % 12;
    }

    return d3;
}

int main()
{
    Distance d1, d2, d3;

    cout << "Enter first distance:" << endl;
    d1.getDistance();

    cout << "\nEnter second distance:" << endl;
    d2.getDistance();

    d3 = d1 + d2;

    cout << "\nResult after addition:" << endl;
    d3.display();

    return 0;
}