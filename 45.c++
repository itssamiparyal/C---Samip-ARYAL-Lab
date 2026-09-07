//Lab: Create a Point class to find distance between two points using operator overloading.
#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }

    double operator-(Point p)
    {
        return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
    }
};

int main()
{
    Point p1(3, 4);
    Point p2(0, 0);

    double distance = p1 - p2;

    cout << "Euclidean Distance: " << distance;

    return 0;
}