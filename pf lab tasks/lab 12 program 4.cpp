#include <iostream>
using namespace std;
unsigned long long factorial(int n) {
    unsigned long long result = 1; 
    for (int i = 1; i <= n; ++i) {
        result *= i; 
    }
    return result; 
}
int main() {
    int number;

    // Prompt the user to enter a number
    cout << "Enter a non-negative integer: ";
    cin >> number;
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        unsigned long long fact = factorial(number);
        cout << "The factorial of " << number << " is " << fact << "." << endl;
    }

    return 0;
}
