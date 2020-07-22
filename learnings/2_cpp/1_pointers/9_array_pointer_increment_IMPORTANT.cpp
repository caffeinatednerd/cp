#include <iostream>
using namespace std;

// IMPORTANT INTERVIEW QUESTION

/*

Pre-Fix ++ and * both have same precedence and both are right associavity
So, expressions
++*p1 and *++p3 both are evaluated from right to left

++*p1 = ++(*p1)

*++p3 = *(++p3)

In, *p2++  post fix ++ is executed after the execution of current line

So, *p2 is evaluated first and when the control goes to next line postfix ++ increases the address of p2 by 1
*p2++ = *(p2) -> p2++

*/


int main() {
    int arr1[] = {10, 20};
    int *p1 = arr1; // *p1 = 10
    cout << ++*p1 << endl; // ++(*p1) = 11
    cout << arr1[0] << " " << arr1[1] << " " << *p1 << endl << endl;
    // 11 20 11

    int arr2[] = {10, 20};
    int *p2 = arr2; // *p2 = 10
    cout << *p2++ << endl; // *(p2++) = 10 (Address is increased by 1 after this line is executed)
    // In this line, p2 is pointing to arr2[1]
    cout << arr2[0] << " " << arr2[1] << " " << *p2 << endl << endl;
    // 10 20 20

    int arr3[] = {10, 20};
    int *p3 = arr3; // *p3 = 10
    cout << *++p3 << endl; // *(++p3) = 20
    cout << arr3[0] << " " << arr3[1] << " " << *p3 << endl << endl;
    // 10 20 20

    return 0;    
}