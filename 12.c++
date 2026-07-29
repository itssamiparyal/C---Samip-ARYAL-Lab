//Online Shopping Cart System Using While Loop in C++
#include <iostream>
using namespace std;

int choice, quantity;
float totalBill = 0, itemTotal;

int main() {
    cout << "=========================\n";
    cout << "   ONLINE SHOPPING CART\n";
    cout << "=========================\n";

    while (true) {
        cout << "\nAvailable Products\n";
        cout << "1. Laptop        - Rs. 70000\n";
        cout << "2. Smartphone    - Rs. 30000\n";
        cout << "3. Headphone     - Rs. 20000\n";
        cout << "4. Smart Watch   - Rs. 50000\n";
        cout << "5. Checkout & Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        
        if (choice == 5) {
            break;
        }

        cout << "Enter Quantity: ";
        cin >> quantity;

        switch (choice) {
            case 1:
                itemTotal = 70000 * quantity;
                totalBill += itemTotal;
                break;

            case 2:
                itemTotal = 30000 * quantity;
                totalBill += itemTotal;
                break;

            case 3:
                itemTotal = 20000 * quantity;
                totalBill += itemTotal;
                break;

            case 4:
                itemTotal = 50000 * quantity;
                totalBill += itemTotal;
                break;

            default:
                cout << "Invalid Choice!\n";
                break;
        }

        cout << "Current Cart Total: Rs. " << totalBill << endl;
    }

    cout << "\n=======================\n";
    cout << "Final Bill = Rs. " << totalBill << endl;
    cout << "Thank you for Shopping!\n";
    cout << "=======================\n";

    return 0;
}