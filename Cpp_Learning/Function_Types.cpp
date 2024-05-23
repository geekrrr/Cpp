#include <iostream>
#include <string>

using namespace std;

// Function with two integer parameters and integer return value
int add(int x, int y) {
    return x + y;
}

// Function with two double parameters and double return value
double multiply(double a, double b) {
    return a * b;
}

// Function with a string parameter and void return type
void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    int num1 = 5;
    int num2 = 7;
    double value1 = 3.5;
    double value2 = 2.5;
    string name = "Alice";

    // Function call with integer parameters and return value
    int sum = add(num1, num2);
    cout << "Sum: " << sum << endl;

    // Function call with double parameters and return value
    double product = multiply(value1, value2);
    cout << "Product: " << product << endl;

    // Function call with string parameter and void return type
    greet(name);

    return 0;
}
