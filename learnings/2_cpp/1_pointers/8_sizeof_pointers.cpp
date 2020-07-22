#include <iostream>
using namespace std;

// Size of a pointer always remain same irrespective of the type of value it points to
// Size is only dependent on the compiler - 4 or 8 bytes

int main() {
    int arr1[] = {1,2,3};
    int *ptr1;
    cout << sizeof(arr1) << endl; // 4 bytes * 3 = 12
    cout << sizeof(ptr1) << endl; // 4 bytes

    char arr2[] = {1,2,3};
    char *ptr2;
    cout << sizeof(arr2) << endl; // 1 byte * 3 = 3 bytes
    cout << sizeof(ptr2) << endl; // 4 bytes (Same as previous one)
    
    return 0;    
}