#include <iostream>

using namespace std;

// Function definition
int add(int x, int y) {
    return x + y;
}

int main() {
    int num1 = 5;
    int num2 = 7;

    // Function call
    int sum = add(num1, num2);
    cout << "Sum: " << sum << endl;

    return 0;
}
