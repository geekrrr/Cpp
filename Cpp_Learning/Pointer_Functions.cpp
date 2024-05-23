#include <iostream>

using namespace std;

// Function that takes a pointer to an integer and modifies the value it points to
void modifyValue(int* ptr) {
    *ptr = 20;  // Change the value pointed to by ptr
}

// Function that returns a pointer to an integer
int* createArray(int size) {
    int* arr = new int[size];  // Dynamically allocate an array of integers
    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1;  // Initialize the array elements
    }
    return arr;  // Return the pointer to the array
}

// Function that takes a pointer to an integer array and its size, then prints the array
void printArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i << ": " << arr[i] << endl;
    }
}

int main() {
    // Part 1: Passing pointers to functions
    int num = 10;
    cout << "Value of num before modifyValue function: " << num << endl;
    modifyValue(&num);  // Pass the address of num to the function
    cout << "Value of num after modifyValue function: " << num << endl;

    cout << endl;

    // Part 2: Returning pointers from functions
    int size = 5;
    int* array = createArray(size);  // Get a dynamically allocated array
    cout << "Array elements returned from createArray function:" << endl;
    printArray(array, size);  // Print the array elements

    // Free the dynamically allocated memory
    delete[] array;

    return 0;
}
