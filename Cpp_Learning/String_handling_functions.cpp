#include <iostream>
#include <string>

using namespace std;

int main() {
    // String Initialization
    string str1 = "Hello, ";
    string str2 = "World!";
    string str3 = "C++ Programming";

    // String Length
    cout << "Length of str1: " << str1.length() << endl;
    cout << "Length of str2: " << str2.length() << endl;

    // String Concatenation
    string str4 = str1 + str2;
    cout << "Concatenation of str1 and str2: " << str4 << endl;

    // Substring
    string subStr = str3.substr(4, 9); // Starting from index 4, length 9
    cout << "Substring of str3 (from index 4, length 9): " << subStr << endl;

    // Replace
    str3.replace(0, 3, "Advanced");
    cout << "After replacing 'C++' with 'Advanced': " << str3 << endl;

    // Erase
    str3.erase(9, 11); // Erase from index 9, length 11
    cout << "After erasing 'Programming': " << str3 << endl;

    // Insert
    str3.insert(9, "Coding");
    cout << "After inserting 'Coding': " << str3 << endl;

    // Append
    str3.append(" is fun!");
    cout << "After appending ' is fun!': " << str3 << endl;

    return 0;
}
