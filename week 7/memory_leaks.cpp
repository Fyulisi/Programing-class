#include <iostream>
using namespace std;

// A function that allocates memory but forgets to delete it
void createLeak() {
// 'new int' allocates memory on the HEAP (dynamic memory) for one integer.
// It returns the memory address, which we store in 'ptr'.
int* ptr = new int(42);

cout << "Inside function. The value is: " << *ptr << endl;
cout << "Memory allocated at address: " << ptr << endl;

// THE LEAK: The function ends here.
// The local variable 'ptr' is destroyed, but the memory on the heap
// it was pointing to is NEVER freed. We have lost the address,
// and the memory is now unreachable but still reserved by the OS.
}

int main() {


cout << "Calling function that leaks memory..." << endl;
createLeak();
cout << "Function finished. The memory is now leaked." << endl;

// If we called createLeak() in a loop a million times,
// the program would consume gigabytes of RAM and crash.

return 0;
}

void fixLeak() {
// Allocate memory
int* ptr = new int(42);

cout << "Inside fixed function. Value: " << *ptr << endl;
cout << "Memory allocated at address: " << ptr << endl;

// THE FIX: The 'delete' operator frees the memory back to the operating system.
delete ptr;

// GOOD PRACTICE: Set the pointer to nullptr after deleting it.
// This prevents "dangling pointers" (pointers that point to freed memory).
ptr = nullptr;


cout << "Memory has been successfully freed." << endl;
}
