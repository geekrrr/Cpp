#include <iostream>

using namespace std;

int main() {
    // If-else statement
    int x = 10;
    if (x > 5) {
        cout << "x is greater than 5" << endl;
    } else {
        cout << "x is not greater than 5" << endl;
    }

    // Switch-case statement
    char grade = 'B';
    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Well done!" << endl;
            break;
        case 'C':
            cout << "Passed!" << endl;
            break;
        default:
            cout << "Invalid grade" << endl;
    }

    // While loop
    int i = 0;
    cout << "While loop:" << endl;
    while (i < 5) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // Do-while loop
    cout << "Do-while loop:" << endl;
    int j = 0;
    do {
        cout << j << " ";
        j++;
    } while (j < 5);
    cout << endl;

    // For loop
    cout << "For loop:" << endl;
    for (int k = 0; k < 5; k++) {
        cout << k << " ";
    }
    cout << endl;

    return 0;
}
