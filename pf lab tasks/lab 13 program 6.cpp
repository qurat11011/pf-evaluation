#include <iostream>
using namespace std;
int main() {
    int number = 42;
    void* voidPointer;
    voidPointer = &number;
    int* intPointer = static_cast<int*>(voidPointer);
    cout << "The value of the integer is: " << *intPointer << endl;
    return 0;
}
