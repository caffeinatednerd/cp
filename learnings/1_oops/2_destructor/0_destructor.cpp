#include <iostream>
using namespace std;

// Only one destructor can called unlike constructor which can be multiple like copy constructor, default constructor, parametrized


class Test {
public:
    Test() { cout << "constructor called" << endl; }
    ~Test() { cout << "destructor called" << endl; }
};

int main() {
     
    Test t;
    
    Test t2;
    return 0;    
}