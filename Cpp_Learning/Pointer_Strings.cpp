#include <iostream>

using namespace std;

int main() {
    char str[] = "Hello, World!";
 
    char *ptr = str;

    cout << "String using pointer: ";
    while (*ptr != '\0') {
        cout << *ptr;
        ptr++;
    }
    cout << endl;

    // Reset the pointer to the start of the string
    ptr = str;

    cout << "Modified string using pointer: ";
    while (*ptr != '\0') {
        *ptr = 'X'; 
        cout << *ptr;
        ptr++;
    }
    cout << endl;

    cout << "Original string after modification: " << str << endl;

    return 0;
}
