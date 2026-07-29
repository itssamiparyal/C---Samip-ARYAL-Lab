//Write a C++ program to define a Product class, input product details, 
//display them, and calculate the total bill. 
#include <iostream>
#include <string>
using namespace std;

class Product
{
public:
    int productId;
    string productName;
    int quantity;
    float price;

    void display()
    {
        cout << "\n--- Product Details ---" << endl;
        cout << "Product ID: " << productId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price per Unit: Rs. " << price << endl;

        float totalBill = quantity * price;
        cout << "Total Bill: Rs. " << totalBill << endl;
    }
};

int main()
{
    Product p;

    cout << "Enter Product ID: ";
    cin >> p.productId;

    cin.ignore();

    cout << "Enter Product Name: ";
    getline(cin, p.productName);

    cout << "Enter Quantity: ";
    cin >> p.quantity;

    cout << "Enter Price per Unit: Rs. ";
    cin >> p.price;

    p.display();

    return 0;
}