#include <iostream>
using namespace std;
int main() {
    int number = 10;
    int* pointer = &number;
    cout << "Original value of 'number': " << number << endl;
    *pointer = 20; 
    cout << "Modified value of 'number' using pointer: " << number << endl;
    return 0;
}
