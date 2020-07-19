#include <iostream>
using namespace std;

// In Java, multiple inheritance is not allowed due to problems like Diamond Problem.

/*
Diamond Problem:

When class B and C inherits from class A and class D inherits from B and C,
When we make an object of D,
the constructor of A is called 2 times which leads to 2 paths to get the value of any memebr of A (i.e. through B and C)

Thus, when we call any member of A, compiler error occurs.
*/

// In C++, however, we can resolve this issue by adding virtual keyword

class A {
public:
    int x;
    A() {
        cout << "A\n";
    }
};

class B : public A {
public:
    B() {
        cout << "B\n";
    }
};

class C : public A {
public:
    C() {
        cout << "C\n";
    }
};

class D: public B, public C {
public:
    D() {
        cout << "D\n";
    }
};

int main() {
    D obj;    

    // Comment the below line to see constructor calls
    cout << obj.x;
    
    return 0;    
}