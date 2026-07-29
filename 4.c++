//Write a C++ Program to Check Whether a Person is Eligible to Vote or not.

#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter age of person: ";
    cin>>age;

    if(age>=18){
        cout<<"You are eligible";
    }
    else{
        cout<<"You are not eligibe";
    }
}