#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int age;
    bool hasTicket;
    bool isMember;
    bool isBanned;

    // Get user input
    cout << "Enter age: ";
    cin >> age;

    cout << "Do you have a ticket? (1 for yes, 0 for no): ";
    cin >> hasTicket;

    cout << "Are you a member? (1 for yes, 0 for no): ";
    cin >> isMember;

    cout << "Are you banned? (1 for yes, 0 for no): ";
    cin >> isBanned;

    // Apply logical operators
    bool canEnter = (age >= 18 && hasTicket && !isBanned) ||
                    (isMember && !isBanned);

    if (canEnter) {
        cout << "You can enter the event!" << endl;
    } else {
        cout << "Sorry, you cannot enter." << endl;
    }

    return 0;
}