#include <iostream>
using namespace std;

// Array is always passed as a pointer to function
// ptr[] = *ptr

// It is not recommended to use sizeof operator in functions to get the size of an array
// As it will always return size of the pointer - 4 or 8 byte

// ptr[i] is general array syntax, so why is working in case of a pointer?
// This is because ptr[2] is interpreted as *(ptr + 2) by the compiler
// That's how arrays internally work


// void fun(int ptr[], int n) {
void fun(int *ptr, int n) {
    for(int i=0; i<n; i++) {
        cout << ptr[i] << " ";
        cout << *(ptr + i);
        cout << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    fun(arr, 5);

    cout << endl << *(arr+2) << endl;
    cout << endl << arr[2] << endl;

    return 0;    
}