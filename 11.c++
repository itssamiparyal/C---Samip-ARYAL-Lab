//Attendance Management System Using For Loop in C++
#include <iostream>
using namespace std;

int main(){
    int num , i ,numP = 0 , numA = 0;
    char attendence;
    cout <<"=========================\n";
    cout <<"ATTENT MANAGEMENT SYSTEM\n";
    cout <<"=========================\n";
    cout << "Enter number of Students: ";
    cin >> num;

    for(i = 1; i <=num; i++){
        cout <<"\nStudent "<< i;
        cout <<"\nEnter Attendence (P/A): ";
        cin >> attendence;
        if (attendence == 'p' || attendence == 'P'){
            numP++;
        }
        else if (attendence == 'a' || attendence == 'A'){
            numA++;
        }
        else{
            cout <<"Invalid Input! Attendence not recorded.\n";
        }
    }
    cout <<"\n=========================\n";
    cout <<"ATTENDENCE SUMMARY\n";
    cout <<"-------------------------\n";
    cout <<"\nPresent Students : "<< numP;
    cout <<"\nAbsent Students : "<< numA;
    cout <<"\nTotal Students : "<< num;
    cout <<"\n=========================\n";

}