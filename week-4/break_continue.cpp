#include <iostream>
using namespace std;

int main() {
    cout << "Number filter: Skip multiples of 3, stop at 15" << endl;

    for (int i = 1; i <= 20; i++) {
        if (i == 15) {
            cout << "Breaking at " << i << "!" << endl;
            break;
        }

        if (i % 3 == 0) {
            continue;
        }

        cout << i << " ";
    }

    cout << endl;

    return 0;
}