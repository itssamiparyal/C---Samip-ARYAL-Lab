//Class Template with Multiple Type Parameters for Student Details
#include <iostream>
using namespace std;

// Class template with multiple type parameters
template <class T, class U, class V>
class Student
{
    T rollNo;
    U name;
    V marks;

public:
    Student(T r, U n, V m)
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
    // Using class template with different data types
    Student<int, string, float> s1(101, "Ramesh", 85.5);

    s1.display();

    return 0;
}