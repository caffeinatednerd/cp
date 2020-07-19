#include <iostream>
using namespace std;


// Diamond Problem
// In C++, however, we can resolve this issue by adding virtual keyword
// Adding virtual keyword, the constructor of A is called only once and hence only possible path to reach A is created

class A {
public:
    int x;
    A() {
        x = 69;
        cout << "A\n";
    }
};

class B : virtual public A {
public:
    B() {
        cout << "B\n";
    }
};

class C : virtual public A {
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
    cout << obj.x;    
    return 0;    
}