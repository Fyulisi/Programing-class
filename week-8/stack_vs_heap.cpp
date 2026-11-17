#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string model;

    Car(string m) {
        model = m;
        cout << "Car created: " << model << endl;
    }

    ~Car() {
        cout << "Car destroyed: " << model << endl;
    }
};

int main() {
    cout << "--- Creating Stack Object ---" << endl;

    Car stackCar("Toyota");

    cout << "\n--- Creating Heap Object ---" << endl;

    Car* heapCar = new Car("Honda");

    cout << "Heap car model: " << heapCar->model << endl;

    cout << "\n--- End of main function ---" << endl;

    delete heapCar;

    return 0;
}