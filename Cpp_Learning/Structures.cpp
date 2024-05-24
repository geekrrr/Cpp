#include <iostream>
#include <string>

using namespace std;

struct Person {
    string name;
    int age;
    char gender;
};

int main() {
    Person person1;

    person1.name = "Alice";
    person1.age = 30;
    person1.gender = 'F';

    Person person2 = {"Bob", 25, 'M'};

    cout << "Person 1 Details:" << endl;
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Gender: " << person1.gender << endl;

    cout << endl;

    cout << "Person 2 Details:" << endl;
    cout << "Name: " << person2.name << endl;
    cout << "Age: " << person2.age << endl;
    cout << "Gender: " << person2.gender << endl;

    return 0;
}
