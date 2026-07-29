//Write a C++ program to define an Order class and return objects from 
//different functions to display order details. 
#include <iostream>
#include <string>
using namespace std;

class Order
{
public:
    int orderId;
    string productName;
    float price;

    // Parameterized Constructor
    Order(int id, string product, float p)
    {
        orderId = id;
        productName = product;
        price = p;
    }

    // Display Function
    void display()
    {
        cout << "\n------ Order Details ------" << endl;
        cout << "Order ID: " << orderId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: Rs. " << price << endl;
    }
};

// Function Returning Object
Order createOrder(int choice)
{
    switch (choice)
    {
    case 1:
        return Order(101, "Laptop", 85000);

    case 2:
        return Order(102, "Mobile", 35000);

    case 3:
        return Order(103, "Monitor", 22000);

    default:
        cout << "\nInvalid Choice!" << endl;
        return Order(0, "No Product", 0);
    }
}

int main()
{
    int choice;

    cout << "========== Online Shopping ==========" << endl;
    cout << "1. Laptop" << endl;
    cout << "2. Mobile" << endl;
    cout << "3. Monitor" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    // Receive returned object
    Order customerOrder = createOrder(choice);

    // Display Order
    customerOrder.display();

    return 0;
}