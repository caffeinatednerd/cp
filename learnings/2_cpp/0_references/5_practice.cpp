#include <iostream>
using namespace std;

int main() {
    int x = 10, z = 20;
    int &y = x; // both x and y are same with different names
    y = z; // y is assigned the value of z and so does x as y is a reference of x
    y = y + 5; // both x and y are changed as they are same
    cout << x << " " << y << " " << z;
    return 0;    
}