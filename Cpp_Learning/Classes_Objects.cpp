#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string name;  
    int age;      

    // Constructor to initialize the Person object
    Person(string name, int age) {
        this->name = name;     // The '->' operator is used to access members of an object through a pointer to that object.
        this->age = age;       // It dereferences the pointer and accesses the member in one step.
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Dynamically allocate memory for a Person object
    Person* personPtr = new Person("John Doe", 25);

    cout << "Using the arrow operator to access members:" << endl;
    cout << "Name: " << personPtr->name << endl;  
    cout << "Age: " << personPtr->age << endl;    

   
    cout << "\nUsing the arrow operator to call a method:" << endl;
    personPtr->displayInfo();  

    // Deallocate the dynamically allocated memory
    delete personPtr;

    return 0;
}
