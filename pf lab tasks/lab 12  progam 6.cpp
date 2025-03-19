#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

// Function prototypes
void displayMenu();
double calculateCost(double price, int quantity);
double calculateFinalBill(double subtotal);

int main() {
    // Menu items and their prices
    vector<string> menuItems = {
        "1. Burger - $5.00",
        "2. Pizza - $8.00",
        "3. Pasta - $7.00",
        "4. Salad - $4.50",
        "5. Soda - $1.50"
    }
    
    vector<double> menuPrices = {5.00, 8.00, 7.00, 4.50, 1.50};
    
    int choice;
    int quantity;
    double subtotal = 0.0;

    do {
        // Display the menu
        displayMenu();
        
        cout << "Enter the number of the item you want to order (0 to exit): ";
        cin >> choice;

        // Check if the user wants to exit
        if (choice == 0) {
            break;
        }

        // Validate the choice
        if (choice < 1 || choice > menuItems.size()) {
            cout << "Invalid choice. Please select a valid item." << endl;
            continue;
        }

        // Ask for the quantity
        cout << "Enter the quantity: ";
        cin >> quantity;

        // Calculate the cost for the selected item
        double cost = calculateCost(menuPrices[choice - 1], quantity);
        subtotal += cost;

        cout << "Added to your order: " << menuItems[choice - 1] << " x " << quantity << " = $" << fixed << setprecision(2) << cost << endl;

    } while (true); // Loop until the user chooses to exit

    // Calculate and display the final bill
    double finalBill = calculateFinalBill(subtotal);
    cout << "\nYour total bill (including service charge): $" << fixed << setprecision(2) << finalBill << endl;

    return 0;
}

// Function to display the menu
void displayMenu() {
    cout << "\n--- Restaurant Menu ---\n";
    cout << "1. Burger - $5.00\n";
    cout << "2. Pizza - $8.00\n";
    cout << "3. Pasta - $7.00\n";
    cout << "4. Salad - $4.50\n";
    cout << "5. Soda - $1.50\n";
    cout << "0. Exit\n";
}

// Function to calculate the cost of an item
double calculateCost(double price, int quantity) {
    return price * quantity;
}

// Function to calculate the final bill with a service charge
double calculateFinalBill(double subtotal) {
    const double serviceChargeRate = 0.10; // 10% service charge
    double serviceCharge = subtotal * serviceChargeRate;
    return subtotal + serviceCharge;
}
