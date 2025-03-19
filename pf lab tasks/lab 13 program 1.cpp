#include <iostream>
using namespace std;
int main() {
    int number = 42;
    int* pointer = &number;
    cout << "The value of the variable 'number' is: " << *pointer << endl;
    return 0;
}
