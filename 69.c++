//Lab: Add two Time objects using binary + operator overloading and friend function.

#include <iostream>
using namespace std;

class Time
{
private:
    int hour;
    int minute;

public:
    void getTime()
    {
        cout << "Enter hour: ";
        cin >> hour;

        cout << "Enter minute: ";
        cin >> minute;
    }

    void display()
    {
        cout << "Time = " << hour << " hours " << minute << " minutes" << endl;
    }

    friend Time operator+(Time t1, Time t2);
};

Time operator+(Time t1, Time t2)
{
    Time t3;

    t3.hour = t1.hour + t2.hour;
    t3.minute = t1.minute + t2.minute;

    if (t3.minute >= 60)
    {
        t3.hour = t3.hour + t3.minute / 60;
        t3.minute = t3.minute % 60;
    }

    return t3;
}

int main()
{
    Time t1, t2, t3;

    cout << "Enter first time:" << endl;
    t1.getTime();

    cout << "\nEnter second time:" << endl;
    t2.getTime();

    t3 = t1 + t2;

    cout << "\nResult after addition:" << endl;
    t3.display();

    return 0;
}