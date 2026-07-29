//Write a C++ program to demonstrate function overloading in an ATM system using 
//overloaded transaction() functions to display the balance, deposit money,
// and withdraw money. 
#include<iostream>
using namespace std;
class ATM{
    private:
        float balance;
    
    public:
        void setBalance(float b){
            balance = b;
        }
        void transaction(){
            cout <<"Current Balance: Rs. "<<balance << endl;

        }
        void transaction(float deposit){
            balance = balance + deposit;
            cout << "Deposited: Rs. "<<deposit << endl;
            cout <<"New balance Rs. "<<balance << endl;
        }
        void transaction (float withdraw, int){
            if(withdraw <=balance){
                balance = balance - withdraw;
                cout <<"Withdrawn: Rs. "<< withdraw << endl;
                cout <<"Reaming Balance: Rs. "<<balance <<endl;
            } else{
                cout << "Insufficient Balance!" <<endl;
            }
        }
};
int main(){
    ATM a;
    float balance , amount;
    int choice;

    cout <<"Enter initial Balance: ";
    cin >> balance;

    a.setBalance(balance);

    cout<<"\n====== ATM MENU ===="<<endl;
    cout << "1. Check Balance"<< endl;
    cout <<"2. Deposit Money"<<endl;
    cout <<"3. Withdraw Money"<<endl;
    cout <<"Enter Choice: ";
    cin >> choice;

    switch (choice){
        case 1:
            a.transaction();
            break;
        case 2:
            cout << "Enter Deposit Amount: ";
            cin >> amount;
            a.transaction(amount);
            break;
        case 3:
            cout<< "Enter withdrawal Amount: ";
            cin >> amount;
            a.transaction(amount, 0);
            break;
        default:
            cout <<"Invalid choice!"<<endl;
    }
    return 0;
}