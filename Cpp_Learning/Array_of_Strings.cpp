#include <iostream>
#include <string>

using namespace std;

int main() {
    // Array of strings
    cout << "Array of Strings:" << endl;

    // Declaration and initialization
    string strArray[3] = {"Hello", "World", "C++"};

    // Accessing and printing elements of the array of strings
    for (int i = 0; i < 3; ++i) {
        cout << "Element at index " << i << ": " << strArray[i] << endl;
    }

    cout << endl;

    // Modifying elements of the array of strings
    strArray[1] = "Programming";
    cout << "After modification:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "Element at index " << i << ": " << strArray[i] << endl;
    }

    return 0;
}
