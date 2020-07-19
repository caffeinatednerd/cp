#include <iostream>
using namespace std;

/* 
Operator Overloading can be implemented by:
1. Making a member function
2. Making a global function
*/

// Important Points:

// Makes the code more readable when using operators on classes
// Precedence, associativity and arity of operators remain same as in general integer operations
// . , :: , ?: and sizeof  operators cannot be overloaded

// Assignement Operator - Compiler creates a default assignment operator if not explicitly created for any class
// Otherwise this code will not work -> Complex c1, c1; c1 = c2;

// When do we need to write our own assignment operator?
// Default assigment operator does shallow copy
// So, if there are dynamically associated pointers or memebers in the class, we shoud do deep copy
// Thus, in this case, we should use our own assignment operator that allocates a new dynamic memory and then copies class
// Just like in case of copy constructor


/* 
If your class has constructors that dynamically allocates memory and you have a pointer inside that class that points to this dynamically allocated memory, then you should write:

1. destructors: to ensure there is no memory leak
2. copy constructor: to make sure that shallow copy does not happen 
3. own assignment operator: same reason as 2

*/
class Complex {
private:
    int real, imag;
public:
    Complex(int r=0, int i=0) : real(r), imag(i) {}
    Complex operator + (Complex const obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print() {
        cout << real << " + i" << imag << endl;
    }
};

int main() {
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;    
}