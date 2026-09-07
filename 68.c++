//Lab: Implement animal sounds using a pure virtual function.

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound() = 0;
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog says: Woof Woof" << endl;
    }
};

class Cat : public Animal
{
public:
    void sound()
    {
        cout << "Cat says: Meow Meow" << endl;
    }
};

int main()
{
    Animal *a;

    Dog d;
    Cat c;

    a = &d;
    a->sound();

    a = &c;
    a->sound();

    return 0;
}