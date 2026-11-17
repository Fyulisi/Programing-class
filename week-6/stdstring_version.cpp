#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Name: " << name << endl;
    cout << "Length: " << name.length() << endl;
    cout << "First character: " << name[0] << endl;

    string copy = name;
    cout << "Copy: " << copy << endl;

    string greeting = "Hello, " + name + "!";
    cout << greeting << endl;

    return 0;
}