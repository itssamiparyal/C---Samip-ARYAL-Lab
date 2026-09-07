//Lab: Display the number of objects created using a static member.

#include <iostream>
using namespace std;

class Student
{
private:
    static int count;

public:
    Student()
    {
        count++;
    }

    static void displayCount()
    {
        cout << "Number of objects created = " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1;
    Student s2;
    Student s3;
    Student s4;

    Student::displayCount();

    return 0;
}