#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream myFile("missing_file.txt");

    string data;

    cout << "Attempting to read from missing file..." << endl;

    myFile >> data;

    cout << "Data read: " << data << endl;
    cout << "Program continued running without crashing." << endl;

    return 0;
}