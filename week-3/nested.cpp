#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a > b) {
        if (b > c) {
            cout << "Path 1: a > b > c" << endl;
        } else {
            if (a > c) {
                cout << "Path 2: a > c > b" << endl;
            } else {
                cout << "Path 3: c > a > b" << endl;
            }
        }
    } else {
        if (a > c) {
            cout << "Path 4: b > a > c" << endl;
        } else {
            if (b > c) {
                cout << "Path 5: b > c > a" << endl;
            } else {
                cout << "Path 6: c > b > a" << endl;
            }
        }
    }

    return 0;
}