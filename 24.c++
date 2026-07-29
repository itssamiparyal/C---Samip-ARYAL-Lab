//Write a C++ program to define a Book class, input book details, 
//display them, and calculate the price after applying a 10% discount.
#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    int bookId;
    string title;
    float price;

    void display()
    {
        cout << "\n--- Book Details ---" << endl;
        cout << "Book ID: " << bookId << endl;
        cout << "Title: " << title << endl;
        cout << "Original Price: Rs. " << price << endl;

        float discount = price * 0.10;
        float finalPrice = price - discount;

        cout << "Discount (10%): Rs. " << discount << endl;
        cout << "Price After Discount: Rs. " << finalPrice << endl;
    }
};

int main()
{
    Book b;

    cout << "Enter Book ID: ";
    cin >> b.bookId;

    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, b.title);

    cout << "Enter Book Price: Rs. ";
    cin >> b.price;

    b.display();

    return 0;
}