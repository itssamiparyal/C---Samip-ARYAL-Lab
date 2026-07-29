//Write a C++ program to define a Mobile class, input mobile details,
// display them, and calculate the price after a 5% discount. 
#include <iostream>
#include <string>
using namespace std;

class Mobile
{
public:
    string brandName;
    string modelName;
    float price;

    void display()
    {
        cout << "\n--- Mobile Details ---" << endl;
        cout << "Brand Name: " << brandName << endl;
        cout << "Model Name: " << modelName << endl;
        cout << "Original Price: Rs. " << price << endl;

        float discount = price * 0.05;
        float finalPrice = price - discount;

        cout << "Discount (5%): Rs. " << discount << endl;
        cout << "Price After Discount: Rs. " << finalPrice << endl;
    }
};

int main()
{
    Mobile m;

    cout << "Enter Brand Name: ";
    getline(cin, m.brandName);

    cout << "Enter Model Name: ";
    getline(cin, m.modelName);

    cout << "Enter Price: Rs. ";
    cin >> m.price;

    m.display();

    return 0;
}