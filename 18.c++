//Write a C++ program to calculate the total amount using a default delivery charge.
#include <iostream>
using namespace std;

class FoodOrder
{
private:
    float foodPrice;

public:
    void setPrice(float price)
    {
        foodPrice = price;
    }

    float totalAmount(float deliveryCharge = 80)
    {
        return foodPrice + deliveryCharge;
    }
};

int main()
{
    FoodOrder order;
    float foodPrice, deliveryCharge;
    int choice;

    cout << "=== ONLINE FOOD ORDERING SYSTEM ===" << endl;

    cout << "Enter Food Price: Rs. ";
    cin >> foodPrice;

    order.setPrice(foodPrice);

    cout << "\n1. Use Default Delivery Charge (Rs. 80)" << endl;
    cout << "2. Enter Your Own Delivery Charge" << endl;
    cout << "Enter Your Choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "\nTotal Amount = Rs. " << order.totalAmount();
    }
    else if (choice == 2)
    {
        cout << "Enter Delivery Charge: Rs. ";
        cin >> deliveryCharge;

        cout << "\nTotal Amount = Rs. " << order.totalAmount(deliveryCharge);
    }
    else
    {
        cout << "Invalid Choice!";
    }

    return 0;
}