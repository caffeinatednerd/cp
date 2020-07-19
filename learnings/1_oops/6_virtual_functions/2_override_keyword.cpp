#include <iostream>
using namespace std;

// Virtual Functions - Override keyword

// Used for READABILITY (that this function is overriding some other function in base class) 
// Also used for syntax avoiding errors like Print() in child class and print() in base class

class Base {
public: 
    virtual void print() {
        cout << "Base\n";
    }
};

class Derived : public Base {
public:
    void print() override { 
        cout << "Derived\n";
    }
};

int main() {
    Base b1;
    Base *b = new Derived; 
    Derived d;
    Base &ptr = d; 
    b1.print();
    b->print();
    d.print();
    ptr.print();
    return 0;    
}