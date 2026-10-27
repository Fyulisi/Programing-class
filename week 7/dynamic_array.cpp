#include <iostream>
using namespace std;

// We define a class to group the pointer, size, and capacity together
class DynamicArray {
private:
int* data; // Pointer to the dynamically allocated array
int size; // Number of actual elements currently stored
int capacity; // Total number of slots currently allocated


public:
// CONSTRUCTOR: Runs when the object is created
DynamicArray(int initialCapacity) {
capacity = initialCapacity;
size = 0;
// Allocate the initial raw array on the heap
data = new int[capacity];
}

// DESTRUCTOR: Runs when the object is destroyed (e.g., goes out of scope)
~DynamicArray() {
// Clean up the dynamic memory to prevent leaks!
delete[] data;
}

// Method to add a new element to the end
void push_back(int value) {
// 1. Check if we have run out of space
if (size == capacity) {
// We need to resize!
// a. Double the capacity
int newCapacity = capacity * 2;

// b. Allocate a new, larger array on the heap
int* newData = new int[newCapacity];

// c. Copy the old elements into the new array
for (int i = 0; i < size; i++) {
newData[i] = data[i];
}

// d. Delete the old, smaller array to free memory
delete[] data;

// e. Update our pointer and capacity to use the new array
data = newData;
capacity = newCapacity;

cout << "[Resized capacity from " << capacity/2 << " to " << capacity << "]" << endl;
}

// 2. Add the new value at the next available slot
data[size] = value;
size++; // Increment the size counter
}

// Method to print the array contents
void display() {
cout << "Array (Size: " << size << ", Capacity: " << capacity << "): ";
for (int i = 0; i < size; i++) {
cout << data[i] << " ";


}
cout << endl;
}
};

int main() {
// Create a dynamic array starting with a capacity of 2
DynamicArray myArray(2);
cout << "Created dynamic array with capacity 2." << endl;

// Add elements and watch it resize automatically
myArray.push_back(10);
myArray.push_back(20);
myArray.display();

// This push_back should trigger a resize!
cout << "\nAdding third element..." << endl;
myArray.push_back(30);
myArray.display();

cout << "\nAdding fourth and fifth elements..." << endl;
myArray.push_back(40);
myArray.push_back(50); // This will trigger another resize
myArray.display();

// When main() ends, the destructor ~DynamicArray() is automatically called,


// preventing memory leaks.
return 0;
}