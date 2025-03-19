#include <iostream>
using namespace std;
int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int* pointer = numbers;
    cout << "Elements of the array are:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i << ": " << *(pointer + i) << endl; 
    }
    return 0;
}
