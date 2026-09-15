//Class Template to Store and Display Student Details
#include <iostream>
using namespace std;

// Class template to store student details
template <class T>
class Student
{
    T rollNo;
    T marks;
    string name;

public:
    Student(T r, string n, T m)
    {
        rollNo = r;
        name = n;
        marks = m;
    }

    void display()
    {
        cout << "Roll No = " << rollNo << endl;
        cout << "Name = " << name << endl;
        cout << "Marks = " << marks << endl;
    }
};

int main()
{
    // Using class template with integer data
    Student<int> s1(101, "Ramesh", 85);

    s1.display();

    return 0;
}