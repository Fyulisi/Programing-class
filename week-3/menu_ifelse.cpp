#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Menu:\n1. Start\n2. Load\n3. Settings\n4. Exit\nChoice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Starting game..." << endl;
    } else if (choice == 2) {
        cout << "Loading game..." << endl;
    } else if (choice == 3) {
        cout << "Opening settings..." << endl;
    } else if (choice == 4) {
        cout << "Exiting..." << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}