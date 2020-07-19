#include <iostream>
using namespace std;

// Multiple Inheritance

// Multiple Inheritance is different from multi-level inheritance

/* 
In Multiple Inheritance, one class can inherit from multiple different classes (as shoen in this program)
In Multi-level Inheritance, B class inherits from A and C class inherits from B
*/

// Order of constructor is A, B, C as seen in result

class A {
public:
    A() {
        cout << "A\n";
    }
};
class B{
public:
    B() {
        cout << "B\n";
    }
};

class C: public A, public B {
public:
    C() {
        cout << "C\n";
    }
};

int main() {
    C obj;    
    return 0;    
}