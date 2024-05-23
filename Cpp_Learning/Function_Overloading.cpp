#include <iostream>
#include <string>

using namespace std;

// Function Overloading: Same function name, different parameter types

// Function to add two integers
int add(int x, int y) {
    return x + y;
}

// Function to add two doubles
double add(double x, double y) {
    return x + y;
}

// Function to concatenate two strings
string add(string x, string y) {
    return x + y;
}

int main() {
    int int1 = 5, int2 = 7;
    double double1 = 3.5, double2 = 2.5;
    string str1 = "Hello, ", str2 = "World!";

    // Call the integer version of add
    int intSum = add(int1, int2);
    cout << "Sum of integers: " << intSum << endl;

    // Call the double version of add
    double doubleSum = add(double1, double2);
    cout << "Sum of doubles: " << doubleSum << endl;

    // Call the string version of add
    string strSum = add(str1, str2);
    cout << "Concatenation of strings: " << strSum << endl;

    return 0;
}
