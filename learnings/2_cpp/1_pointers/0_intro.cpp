#include <iostream>
using namespace std;

// & is used for:
// 1. Creating a reference variable 
// 2. Get the address of a variable 
 
// * is used for:
// 1. Creating a Pointer variable 
// 2. De-referencing an address variable


// Except reference at all other places & is used for address of variables
// When used before a variable name (while not declaring it) gives address of the variable

int main() {
    int x = 10;
    // & gives address       
    // * is when used before an address is used to give the value stores in the address
    // * also called as dereference operator
    cout << *(&x) << endl; 

    // Pointer Variables - Stores address, so RHS must use & before a variable name
    int *ptr = &x;
    cout << *ptr << endl; // Gets the value at the address &x, i.e. value stored in x
    cout << ptr; // Gets the value of address &x
    return 0;    
}


// Variable   Value     Address
//     x      10        0x1234
//     ptr    0x1234    0x1238


// Pointers also have data types
// string *ptr_s will store address of a string variable
// double *ptr_d will store address of a double variable