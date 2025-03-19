#include <iostream>
#include <iomanip>  // for setw()
using namespace std;

int main() {
    int account, balance;
    cout << "Enter your account number: ";
    cin >> account;
    
    cout << "Enter your account balance: $";
    cin >> balance;
    
    bool loyalty;
    cout << "Are you a loyal customer? Enter 1 if Yes and 0 if No: ";
    cin >> loyalty;
    
    cout << endl << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "                ~DETAILS~                              " << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << endl << endl;
    
    // Use setw() to align the output properly
    cout << setw(12) << "Account Type" 
         << setw(29) << "Loyalty Status" 
         << setw(37) << "Special Offer Eligibility" << endl;
    
    // Print Account Type
    if (balance < 100)
        cout << setw(12) << "Low Balance Account";
    else if (balance >= 100 && balance <= 500)
        cout << setw(12) << "Standard Account";
    else
        cout << setw(12) << "Premium Account";

    // Print Loyalty Status
    cout << setw(29);
    if (loyalty == 1)
        cout << "Loyal";
    else
        cout << "Not Loyal";
    
    // Print Special Offer Eligibility
    cout << setw(37);
    if (balance > 500 && loyalty == 1)
        cout << "Eligible";
    else
        cout << "Not Eligible";

    cout << endl;
    
    return 0;
}
