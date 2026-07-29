//Restaurant Ordering System Using Do-While Loop in C++ 
#include <iostream>
using namespace std;

int main()
{
    int choice, quantity;
    char more;
    float bill = 0, itemTotal, discount, amount;

    do
    {
        cout << "\n=====================================\n";
        cout << "      RESTAURANT ORDERING SYSTEM\n";
        cout << "=====================================\n";
        cout << "1. Pizza      - Rs. 500\n";
        cout << "2. Burger     - Rs. 300\n";
        cout << "3. Momo       - Rs. 200\n";
        cout << "4. Chowmein   - Rs. 250\n";
        cout << "=====================================\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        cout << "Enter Quantity: ";
        cin >> quantity;

        switch (choice)
        {
        case 1:
            itemTotal = 500 * quantity;
            cout << "Pizza Ordered Successfully!\n";
            break;

        case 2:
            itemTotal = 300 * quantity;
            cout << "Burger Ordered Successfully!\n";
            break;

        case 3:
            itemTotal = 200 * quantity;
            cout << "Momo Ordered Successfully!\n";
            break;

        case 4:
            itemTotal = 250 * quantity;
            cout << "Chowmein Ordered Successfully!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
            itemTotal = 0;
        }

        bill += itemTotal;

        cout << "Item Total : Rs. " << itemTotal << endl;
        cout << "Current Bill : Rs. " << bill << endl;

        cout << "\nDo You Want To Order More Items? (Y/N): ";
        cin >> more;

    } while (more == 'Y' || more == 'y');

    if (bill >= 1500)
        discount = bill * 0.10;
    else if (bill >= 1000)
        discount = bill * 0.05;
    else
        discount = 0;

    amount = bill - discount;

    cout << "\n========== BILL SUMMARY ==========\n";
    cout << "Total Bill    : Rs. " << bill << endl;
    cout << "Discount      : Rs. " << discount << endl;
    cout << "Amount To Pay : Rs. " << amount << endl;
    cout << "==================================\n";
    cout << "Thank You For Visiting Our Restaurant!\n";

    return 0;
}