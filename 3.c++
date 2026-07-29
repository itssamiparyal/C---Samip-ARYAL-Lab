//Write a C++ Program to Check Divisibility by 5

#include <iostream>
using namespace std;

int main(){
    int num;
    cout <<"Enter a number: ";
    cin >> num;

    if(num % 5 == 0){
        cout <<"The number is divisibility by 5";
    }
    
    return 0;
}