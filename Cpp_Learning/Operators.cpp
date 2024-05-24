#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 3;
    bool key = true;

    // Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl; // Addition
    cout << "a - b = " << (a - b) << endl; // Subtraction
    cout << "a * b = " << (a * b) << endl; // Multiplication
    cout << "a / b = " << (a / b) << endl; // Division (integer division)
    cout << "a % b = " << (a % b) << endl; // Modulus (remainder of division)

    // Relational Operators
    cout << "\nRelational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl; // Equal to
    cout << "a != b: " << (a != b) << endl; // Not equal to
    cout << "a > b: " << (a > b) << endl;   // Greater than
    cout << "a < b: " << (a < b) << endl;   // Less than
    cout << "a >= b: " << (a >= b) << endl; // Greater than or equal to
    cout << "a <= b: " << (a <= b) << endl; // Less than or equal to

    // Logical Operators
    cout << "\nLogical Operators:" << endl;
    cout << "(a > b) && (a != b): " << ((a > b) && (a != b)) << endl; // Logical AND
    cout << "(a < b) || (a == b): " << ((a < b) || (a == b)) << endl; // Logical OR
    cout << "!key: " << (!key) << endl; // Logical NOT

    // Bitwise Operators
    cout << "\nBitwise Operators:" << endl;
    cout << "a & b: " << (a & b) << endl; // Bitwise AND
    cout << "a | b: " << (a | b) << endl; // Bitwise OR
    cout << "a ^ b: " << (a ^ b) << endl; // Bitwise XOR
    cout << "~a: " << (~a) << endl;       // Bitwise NOT (one's complement)
    cout << "a << 1: " << (a << 1) << endl; // Bitwise left shift by 1
    cout << "a >> 1: " << (a >> 1) << endl; // Bitwise right shift by 1

    // Assignment Operators
    cout << "\nAssignment Operators:" << endl;
    a = 5; cout << "a = 5: " << a << endl; // Simple assignment
    a += 3; cout << "a += 3: " << a << endl; // Addition assignment
    a -= 2; cout << "a -= 2: " << a << endl; // Subtraction assignment
    a *= 2; cout << "a *= 2: " << a << endl; // Multiplication assignment
    a /= 3; cout << "a /= 3: " << a << endl; // Division assignment
    a %= 2; cout << "a %= 2: " << a << endl; // Modulus assignment
    a &= 1; cout << "a &= 1: " << a << endl; // Bitwise AND assignment
    a |= 2; cout << "a |= 2: " << a << endl; // Bitwise OR assignment
    a ^= 1; cout << "a ^= 1: " << a << endl; // Bitwise XOR assignment
    a <<= 1; cout << "a <<= 1: " << a << endl; // Bitwise left shift assignment
    a >>= 1; cout << "a >>= 1: " << a << endl; // Bitwise right shift assignment

    // Unary Operators
    cout << "\nUnary Operators:" << endl;
    int c = 10;
    cout << "c: " << c << endl;
    cout << "++c: " << (++c) << endl;   // Pre-increment
    cout << "c++: " << (c++) << endl;   // Post-increment
    cout << "c: " << c << endl;
    cout << "--c: " << (--c) << endl;   // Pre-decrement
    cout << "c--: " << (c--) << endl;   // Post-decrement
    cout << "c: " << c << endl;
    cout << "-c: " << (-c) << endl;     // Unary minus
    cout << "+c: " << (+c) << endl;     // Unary plus

    return 0;
}
