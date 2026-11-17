#include <iostream>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "Animal makes a generic sound." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

int main() {
    cout << "--- Without Virtual Keyword ---" << endl;

    Animal* myPet;

    myPet = new Dog();

    myPet->speak();

    delete myPet;

    return 0;
}