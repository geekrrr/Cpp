#include <iostream>
using namespace std;

int main() {
    int age = 25;
    float height = 5.9;
    double pi = 3.14159;
    char grade = 'A';
    bool isStudent = true;

    cout << "Age: " << age << endl;              // Outputs: Age: 25
    cout << "Height: " << height << endl;        // Outputs: Height: 5.9
    cout << "PI: " << pi << endl;                // Outputs: PI: 3.14159
    cout << "Grade: " << grade << endl;          // Outputs: Grade: A
    cout << "Is Student: " << boolalpha << isStudent << endl;  // Outputs: Is Student: true

    return 0;
}