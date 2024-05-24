#include <iostream>

using namespace std;

int main() {
    // Declare an array of integers
    int arr[5] = {10, 20, 30, 40, 50};

    // Declare a pointer to an integer and initialize it to the start of the array
    int* ptr = arr;

    // Print the elements of the array using pointer arithmetic
    cout << "Array elements using pointer arithmetic:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Element " << i << ": " << *(ptr + i) << endl;
    }

    cout << endl;

    // Demonstrate incrementing the pointer
    ptr = arr; // Reset the pointer to the start of the array
    cout << "Pointer incrementing demonstration:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Pointer at index " << i << " points to: " << *ptr << endl;
        ++ptr; // Move the pointer to the next element
    }

    cout << endl;

    // Demonstrate decrementing the pointer
    ptr = &arr[4]; // Set the pointer to the last element of the array
    cout << "Pointer decrementing demonstration:" << endl;
    for (int i = 4; i >= 0; --i) {
        cout << "Pointer at index " << i << " points to: " << *ptr << endl;
        --ptr; // Move the pointer to the previous element
    }

    return 0;
}
