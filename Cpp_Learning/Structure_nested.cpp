#include <iostream>
#include <string>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    string name;
    int age;
    char gender;
    Date dob; 
};

int main() {
    Person person;

    person.name = "Alice";
    person.age = 30;
    person.gender = 'F';
    person.dob.day = 10;
    person.dob.month = 5;
    person.dob.year = 1992;

    cout << "Person Details:" << endl;
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Gender: " << person.gender << endl;
    cout << "Date of Birth: " << person.dob.day << "/" << person.dob.month << "/" << person.dob.year << endl;

    return 0;
}
