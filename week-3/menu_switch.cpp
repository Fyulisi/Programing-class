#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Menu:\n1. Start\n2. Load\n3. Settings\n4. Exit\nChoice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Starting game..." << endl;
            break;

        case 2:
            cout << "Loading game..." << endl;
            break;

        case 3:
            cout << "Opening settings..." << endl;
            break;

        case 4:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}