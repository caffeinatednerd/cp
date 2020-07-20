#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *ptr = &x; 
    cout << *ptr << " "; //10
    x = x + 30;
    cout << *ptr << " "; //value at address of x = 40
    cout << ptr << " "; // address of x
    *ptr = *ptr + 40; // changes value stored at address stored in ptr, i.e. value of x
    cout << x << " "; 
    return 0;    
}