#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double number;
    cout << "Enter a number: ";
    cin >> number;
    // Calculate square root
    double squareRoot = sqrt(number);
    // Calculate absolute value
    double absoluteValue = fabs(number);
    // Calculate sine
    double sineValue = sin(number);
    // Calculate cosine
    double cosineValue = cos(number);
    // Calculate power of 3
    double powerOfThree = pow(number, 3);
    cout << fixed; // Set fixed-point notation
    cout.precision(6); // Set precision for floating-point output

    cout << "Square Root: " << squareRoot << endl;
    cout << "Absolute Value: " << absoluteValue << endl;
    cout << "Sine: " << sineValue << endl;
    cout << "Cosine: " << cosineValue << endl;
    cout << "Power of 3: " << powerOfThree << endl;

    return 0;
}
