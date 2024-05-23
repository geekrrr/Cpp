#include <iostream>

using namespace std;

// Function to calculate factorial of a number using recursion
int factorial(int n) {
    // Base case: if n is 0 or 1, return 1
    if (n <= 1) {
        return 1;
    }
    // Recursive case: n * factorial of (n - 1)
    return n * factorial(n - 1);
}

// Function to calculate the nth Fibonacci number using recursion
int fibonacci(int n) {
    // Base case: if n is 0, return 0; if n is 1, return 1
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    // Recursive case: sum of the two preceding numbers
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int number;

    // Factorial example
    cout << "Enter a positive integer to calculate its factorial: ";
    cin >> number;
    if (number < 0) {
        cout << "Factorial of a negative number doesn't exist." << endl;
    } else {
        cout << "Factorial of " << number << " is " << factorial(number) << endl;
    }

    // Fibonacci example
    cout << "Enter a positive integer to find its Fibonacci number: ";
    cin >> number;
    if (number < 0) {
        cout << "Fibonacci of a negative number doesn't exist." << endl;
    } else {
        cout << "Fibonacci number at position " << number << " is " << fibonacci(number) << endl;
    }

    return 0;
}
