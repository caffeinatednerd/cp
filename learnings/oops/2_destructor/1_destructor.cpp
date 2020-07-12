#include <iostream>
using namespace std;

// Only one destructor can called unlike constructor which can be multiple like copy constructor, default constructor, parametrized
// Advised to make own destructor when using dynamic memory allocation (pointers inside a class) else the object will never be de-allocated memory space
class Test {
    int x;
public:
    Test(int i) : x(i) 
    {
        cout << "Cons " << x << endl;
    }
    ~Test() 
    { 
        cout << "Des " << x << endl;
    }
};

int main() {
     
    Test t1(10);
    Test t2(20);
    return 0;    
}