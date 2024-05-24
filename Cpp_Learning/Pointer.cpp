#include <iostream>

using namespace std;

int main() {
    int num = 10;

    int* ptr = &num;

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value stored in ptr (address of num): " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    *ptr = 20;

    cout << "New value of num after using the pointer: " << num << endl;

    return 0;
}
