//Write a C++ program to calculate the area of a square, rectangle, and circle using
// function overloading. Use functions with the same name but different parameters for 
//each shape. 
#include <iostream>
using namespace std;

class Area{
    public:
        void calculate(int side){
            cout<< "Area of Square = " << side * side <<endl;
        }
        void calculate(int length, int breadth){
            cout << "Area of Rectangle = "<< length * breadth <<endl;
        }
        void calculate(float radius){
            cout << "Area of circle = "<< 3.14*radius*radius << endl;
        }
};
int main(){
    Area a;

    int side, length , breadth;
    float radius;

    cout <<"Enter side of square: ";
    cin >> side;
    a.calculate(side);

    cout << "\nEnter length and breadth of rectangle: ";
    cin >> length >> breadth;
    a.calculate(length,breadth);

    cout << "\nEnter raidus of circle: ";
    cin >> radius;
    a.calculate(radius);
    return 0;

}