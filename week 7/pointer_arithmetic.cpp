#include <iostream>
using namespace std;

// The main function - where the program starts
int main() {

// Declare and initialise an array of 5 integers
// In memory, these are stored sequentially, with each element sizeof(int) bytes apart.
int numbers[5] = {10, 20, 30, 40, 50};
int* ptr = numbers;

cout << "Array elements accessed via pointer arithmetic:" << endl;

// Loop 5 times to access each element
for (int i = 0; i < 5; i++) {

// *ptr means "dereference" - go to the address stored in ptr and get the value.
// On the first iteration, this prints 10.
cout << "Value: " << *ptr << endl;

// ARITHMETIC: ptr++ increments the pointer.
// Because ptr is an int pointer, it moves by sizeof(int) bytes to the next array element.
ptr++;
}

// Reset the pointer back to the start of the array
ptr = numbers;

cout << "\nAccessing using offset arithmetic:" << endl;


for (int i = 0; i < 5; i++) {
cout << "Index " << i << " has value: " << *(ptr + i) << endl;
}

return 0;
}