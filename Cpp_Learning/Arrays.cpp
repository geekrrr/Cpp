#include <iostream>

using namespace std;

int main() {
    // Single-Dimensional Array
    cout << "Single-Dimensional Array:" << endl;
    
    // Declaration and initialization
    int singleArray[5] = {1, 2, 3, 4, 5};
    
    // Accessing and printing elements of the single-dimensional array
    for (int i = 0; i < 5; ++i) {
        cout << "Element at index " << i << ": " << singleArray[i] << endl;
    }

    cout << endl;

    // Multi-Dimensional Array (2D Array)
    cout << "Multi-Dimensional Array (2D Array):" << endl;

    // Declaration and initialization
    int multiArray[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Accessing and printing elements of the multi-dimensional array
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Element at index [" << i << "][" << j << "]: " << multiArray[i][j] << endl;
        }
    }

    cout << endl;

    return 0;
}
