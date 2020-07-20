#include <iostream>
using namespace std;

// Return reference to a local variable 
// When a variable is returned as a reference, it can be modified in the main()

// NOTE: We should never return reference to a non-static local variable as the variable is 
// As local non-static variables do not exist after the function call is over
// While static variables do exist

int &fun() {
    // NOTE: static variables are initialized only once
    static int x =10; // This runs only on the first function call
    return x;
}

int main() {
    int &z = fun(); // x returned as reference and is stored in z
    cout << fun() << " "; // 10
    z = 30; // z changes to 30 and so does x
    cout << fun(); //30
    return 0;    
}