#include <iostream>
using namespace std;

// Virtual Functions
 
// Function call is decided on the basis of type of referred or pointed object
// and not on the basis of pointer or reference

// This is an example of FUNCTION OVERRIDING
// Also, it is RUN-TIME Polymorphism - At run-time, it is decided on the basis of object type, that which function to call

// In Function OVERLOADING (same func. name with diff. parameters), the function to call was decided at compile-time, so that was COMPILE-TIME Polymorphism

class Base {
public: 
    virtual void print() {
        cout << "Base\n";
    }
};

class Derived : public Base {
public:
    void print() {
        cout << "Derived\n";
    }
};

int main() {
    Base b;
    Derived d;
    b.print();
    d.print();
    Base *ptr = &d;
    ptr->print();
    return 0;    
}