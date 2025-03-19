#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// Function to calculate the discount based on total price
double calculateDiscount(double total) {
    if (total < 100) {
        return 0.0;
    } else if (total >= 100 && total <= 500) {
        return total * 0.10; // 10% discount
    } else {
        return total * 0.20; // 20% discount
    }
}
// Function to display the invoice
void displayInvoice(const string& itemName, double itemPrice, int quantity, double total, double discount) {
    cout << fixed << setprecision(2);
    cout << "\n--- Invoice ---\n";
    cout << "Item: " << itemName << "\n";
    cout << "Price per item: $" << itemPrice << "\n";
    cout << "Quantity: " << quantity << "\n";
    cout << "Total before discount: $" << total << "\n";
    cout << "Discount: -$" << discount << "\n";
    cout << "Total after discount: $" << (total - discount) << "\n";
    cout << "----------------\n";
}
int main() {
    int categoryChoice, itemChoice, quantity;
    double itemPrice = 0.0;
    string itemName;

    cout << "Welcome to the Shopping System!\n";
    cout << "Select a category:\n";
    cout << "1. Electronics\n";
    cout << "2. Clothing\n";
    cout << "3. Groceries\n";
    cout << "Enter your choice (1-3): ";
    cin >> categoryChoice;

    switch (categoryChoice) {
        case 1: // Electronics
            cout << "Select an item:\n";
            cout << "1. Laptop ($1000)\n";
            cout << "2. Smartphone ($700)\n";
            cout << "3. Headphones ($150)\n";
            cout << "Enter your choice (1-3): ";
            cin >> itemChoice;

            switch (itemChoice) {
                case 1: itemPrice = 1000; itemName = "Laptop"; break;
                case 2: itemPrice = 700; itemName = "Smartphone"; break;
                case 3: itemPrice = 150; itemName = "Headphones"; break;
                default: cout << "Invalid item choice.\n"; return 1;
            }
            break;

        case 2: // Clothing
            cout << "Select an item:\n";
            cout << "1. Jacket ($120)\n";
            cout << "2. T-shirt ($40)\n";
            cout << "3. Jeans ($60)\n";
            cout << "Enter your choice (1-3): ";
            cin >> itemChoice;

            switch (itemChoice) {
                case 1: itemPrice = 120; itemName = "Jacket"; break;
                case 2: itemPrice = 40; itemName = "T-shirt"; break;
                case 3: itemPrice = 60; itemName = "Jeans"; break;
                default: cout << "Invalid item choice.\n"; return 1;
            }
            break;

        case 3: // Groceries
            cout << "Select an item:\n";
            cout << "1. Milk (1 Liter - $2)\n";
            cout << "2. Bread (1 Loaf - $3)\n";
            cout << "3. Eggs (1 Dozen - $5)\n";
            cout << "Enter your choice (1-3): ";
            cin >> itemChoice;

            switch (itemChoice) {
                case 1: itemPrice = 2; itemName = "Milk"; break;
                case 2: itemPrice = 3; itemName = "Bread"; break;
                case 3: itemPrice = 5; itemName = "Eggs"; break;
                default: cout << "Invalid item choice.\n"; return 1;
            }
            break;

        default:
            cout << "Invalid category choice.\n";
            return 1;
    }

    cout << "Enter the quantity you wish to purchase: ";
    cin >> quantity;

    double total = itemPrice * quantity;
    double discount = calculateDiscount(total);
    displayInvoice(itemName, itemPrice, quantity, total, discount);

    return 0;
}










