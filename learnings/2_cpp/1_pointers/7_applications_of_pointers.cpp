#include <iostream>
using namespace std;

// Used for accessing array elements

int main() {
    int arr[] = {20, 30, 40, 50};
    int *ptr = arr; // Address of 0th element of array is stored in ptr

    // In pointer arithmetic, result of adding some value to the address depends upon the type of ptr
    // In this case, the ptr is of type integer (4 bytes)
    // So, 4 will be added to the address of ptr to get the next sequential address
    // Since, in array, elements are stored in contiguous memory locations, we get the address of arr[2] when using ptr+2

    cout << *(ptr+2); // thus, de-referencing ptr+2 gives the value of the element stored in arr[2]
    return 0;    
}

// if it was a double pointer, the address would have been added by 8 bytes