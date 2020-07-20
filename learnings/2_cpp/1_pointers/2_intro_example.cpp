#include <iostream>
using namespace std;

int main() {
    int *p1; // UNINITIALISED POINTER - might be pointing to some invalid memory location
    cout << p1 << " "; 
    cout << *p1 << " "; // Thus, De-Referencing an UNINITIALISED pointer may lead to segmentation faults
    return 0;    
}