#include <iostream>
#include <string>
using namespace std;

// Pointer address remains same irrespective of the type of value it stores
// Thus, the size of address will be same for every datatype which will be compiler dependent

int main() {
    int *p1; // going to store a integer
    double *p2;
    string *p3;   
    char *p4;
    cout << (sizeof p1) << " "; // 4
    cout << (sizeof p2) << " "; // 4
    cout << (sizeof p3) << " "; // 4
    cout << (sizeof p4) << " "; // 4

    cout << endl;

    cout << (sizeof *p1) << " "; // size allocated for int - 4
    cout << (sizeof *p2) << " "; // size allocated for double - 8
    cout << (sizeof *p3) << " "; // size allocated for string - 24
    cout << (sizeof *p4) << " "; // size allocated for char - 1

    return 0;    
}