// Lab: Class Template to Store and Display Student Details

#include <iostream>
#include <string>
using namespace std;

template <class T>
class Student
{
private:
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
    Student<int> s1(101, "Ramesh", 85);

    s1.display();

    return 0;
}



