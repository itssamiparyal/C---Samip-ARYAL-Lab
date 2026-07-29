//Write a C++ Program to Check Whether a Number is Even

#include <iostream>
using namespace std;

int main()
{
   int num;
    cout <<"Enter a number: ";
    cin >> num;

    if(num % 2 == 0){
        cout <<"The number is even";
    }
    
    return 0;
}