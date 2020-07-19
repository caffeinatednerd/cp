#include <iostream>
using namespace std;

// Virtual Functions
// A base class type reference or pointer can refer to a derived class object

// Application - 
// Base class is Employee
// Child classes are different types of employees like executive, SDE, etc.
// Employee class has a general salary increment function with name sal_inc()
// Each employee child class has its own salary increment function with name sal_inc()
// we can use an array of pointers referring to various employees and which will use child classes of the respective employee types and not the general function in the base class

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
    Base *b = new Derived; // Base class pointer referring to a derived class object
    Derived d;
    Base &b = d; // Base class reference referring to a derived class object
    return 0;    
}