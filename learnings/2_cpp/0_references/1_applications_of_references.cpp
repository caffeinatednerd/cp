#include <iostream>
using namespace std;

// Applications 1: To modify a passed parameter

// Here, if we remove & from x and y in swap(), x and y values will remain same as when the control comes to swap(), new variables x and y are created inside it and they are swapped.
// Thus there are no changes in the original x and y in the main().
    
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int x = 10, y = 15;
    swap(x, y);
    cout << x << " " << y;
    return 0;    
}