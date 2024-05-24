#include <iostream>

using namespace std;

int main() {
    int num = 10;
    int* ptr = &num;
    int** ptr_to_ptr = &ptr;

    cout << "Value of num: " << num << endl;
    cout << "Value of num using ptr: " << *ptr << endl;
    cout << "Value of num using ptr_to_ptr: " << **ptr_to_ptr << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Address stored in ptr: " << ptr << endl;
    cout << "Address of ptr: " << &ptr << endl;
    cout << "Address stored in ptr_to_ptr: " << ptr_to_ptr << endl;
    cout << "Address of ptr_to_ptr: " << &ptr_to_ptr << endl;
    
    **ptr_to_ptr = 20;

    cout << "New value of num after modification using ptr_to_ptr: " << num << endl;

    return 0;
}
