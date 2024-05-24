#include <iostream>

using namespace std;

union Value {
    int intValue;
    double doubleValue;
};

int main() {
    Value value;

    value.intValue = 42;

    cout << "Integer Value: " << value.intValue << endl;

    value.doubleValue = 3.14;

    cout << "Double Value: " << value.doubleValue << endl;

    cout << "Integer Value after setting double value: " << value.intValue << endl;

    return 0;
}
