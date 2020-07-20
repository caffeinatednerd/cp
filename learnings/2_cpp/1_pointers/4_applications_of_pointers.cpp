#include <iostream>
using namespace std;

// Application 1
// Changing Passed Parameters

void swap(int *p1, int *p2) { // address are received as pointers variables (normal variables cannot be used)
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int x = 10, y = 20;
    swap(&x, &y); // passed address of x and y
    cout << x << " " << y;
    return 0;    
}