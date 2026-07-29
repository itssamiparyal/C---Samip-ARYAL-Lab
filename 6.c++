//Write a C++ Program to Check ATM Withdrawal Perm
#include <iostream>
using namespace std;

int main(){
    float balance, amount;
    cout << "Enter Account Balnce: ";
    cin >> balance;

    cout << "Enter Withdrawal Amount: ";
    cin >> amount;

    if(balance >= amount){
        if(amount > 0){
            cout << "Withdrawal Sucessfully";
        }
        else{
            cout << "Invalid amount";
        }
    }
    else{
        cout << "Withdrawal amount greater than Account balance";
    }
    return 0;
}