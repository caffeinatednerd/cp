#include <iostream>
using namespace std;

// & before a variale means that it is passed (assigned) by address
// In pass by value, new copies of variable are made, thus new memory is allocated

int main() {
    int x = 10;
    int &y = x;    
    cout << y << " ";
    x = x + 5;
    cout << y << " ";
    y = y + 5;
    cout << x << " ";
    return 0;    
}