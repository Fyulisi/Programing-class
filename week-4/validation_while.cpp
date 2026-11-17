#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a positive number: ";
    cin >> number;

    while (number <= 0) {
        cout << "Invalid! Please enter a positive number: ";
        cin >> number;
    }

    cout << "You entered: " << number << endl;

    return 0;
}