#include <iostream>


using namespace std;

int main() {
// 1. A normal integer variable
int originalValue = 100;

// 2. A REFERENCE variable.
// The '&' after 'int' means 'refValue' is an alias (another name) for originalValue.
// It MUST be initialized when declared, and cannot be changed to refer to something else.
int& refValue = originalValue;

// 3. A POINTER variable.
// The '*' means 'ptrValue' holds a memory address.
// We use '&' (address-of operator) to get the address of originalValue.
int* ptrValue = &originalValue;

cout << "--- Initial State ---" << endl;
cout << "originalValue: " << originalValue << endl;
cout << "refValue: " << refValue << endl;
cout << "ptrValue points to: " << *ptrValue << endl; // * dereferences to get the value

// --- MODIFICATION 1 ---
// Changing the reference changes the original variable.
refValue = 200;

cout << "\n--- After setting refValue = 200 ---" << endl;



cout << "originalValue: " << originalValue << endl; // Expected: 200
cout << "ptrValue points to: " << *ptrValue << endl; // Expected: 200


*ptrValue = 300; // *ptrValue means "the value AT the address"

cout << "\n--- After setting *ptrValue = 300 ---" << endl;
cout << "originalValue: " << originalValue << endl; // Expected: 300
cout << "refValue: " << refValue << endl; // Expected: 300

// --- MODIFICATION 3 ---
// We can change what the pointer points to.
int anotherValue = 500;
ptrValue = &anotherValue; // Pointer now points to a different memory address

cout << "\n--- After pointing ptrValue to anotherValue ---" << endl;
cout << "originalValue: " << originalValue << endl; // Expected: 300
cout << "ptrValue points to: " << *ptrValue << endl; // Expected: 500

// NOTE: We CANNOT do this with the reference!
// refValue = anotherValue; would just copy the value 500 into originalValue.

return 0;
}