#include <iostream>
using namespace std;
void checkEvenOrOdd(int number) {
    if (number % 2 == 0) {
        cout << number << " is Even." << endl;
    } else {
        cout << number << " is Odd." << endl;
    }
}
int main() {
    // Call the function with different values
    checkEvenOrOdd(10);  
    checkEvenOrOdd(7);   
    checkEvenOrOdd(0);  
    checkEvenOrOdd(-4);  
    checkEvenOrOdd(-3);  
    return 0;
}
