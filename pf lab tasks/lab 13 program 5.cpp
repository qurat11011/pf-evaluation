#include <iostream>
using namespace std;
int main() 
{ 
//declare a pointer and initilize it to a null pointer
int* nullptr;
    int* pointer =nullptr;
    // Check if the pointer is null
    if (pointer == nullptr) {
        cout << "The pointer is null and does not point to any valid memory." << endl;
    } else {
        cout << "The pointer is not null and holds the memory address: " << pointer << endl;
    }
    return 0;
}
