#include <iostream>

using namespace std;

int main() {
    // Dynamically allocate memory for an integer
    int* ptr = new int;

    // Check if memory allocation was successful
    if (ptr == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return 1;  
    }
    *ptr = 42;

    cout << "Dynamically allocated integer value: " << *ptr << endl;
    
    delete ptr;
    ptr = nullptr; // Reset the pointer to nullptr after deallocation

    return 0; 
}
