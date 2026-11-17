#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("numbers.txt");

    if (!inputFile.is_open()) {
        cout << "Error: Could not open numbers.txt for reading!" << endl;
        return 1;
    }

    int num;
    int sum = 0;

    cout << "Reading numbers from file..." << endl;

    while (inputFile >> num) {
        cout << "Read: " << num << endl;
        sum += num;
    }

    inputFile.close();

    cout << "Total Sum: " << sum << endl;

    ofstream outputFile("sum.txt");

    if (!outputFile.is_open()) {
        cout << "Error: Could not create sum.txt for writing!" << endl;
        return 1;
    }

    outputFile << "The total sum is: " << sum << endl;
    outputFile << "Calculated automatically by the C++ program." << endl;

    outputFile.close();

    cout << "Result successfully saved to sum.txt!" << endl;

    return 0;
}