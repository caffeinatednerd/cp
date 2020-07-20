#include <iostream>
using namespace std;

// Except reference at all other places & is used for address of variables
// When used before a variable name (while not declaring it) gives address of the variable

int main() {
    int x = 10;
    // & gives address       
    // * is when used before an address is used to give the value stores in the address
    // * also called as dereference operator
    
    cout << *(&x); 
    return 0;    
}