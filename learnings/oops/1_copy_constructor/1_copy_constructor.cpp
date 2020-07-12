#include <iostream>
using namespace std;

// Deep Copy by using own constructor

// Good idea to use own copy constructor when using classes containing pointers and dynamic memory allocation

// t needs to be passed by reference as pass by value will cause recursion 
class Test {
    int *ptr;
public:
    Test(int x) {
        ptr = new int(x);
    }

    // Own Copy Constructor added
    Test(const Test &t) {
        int val = *(t.ptr);
        ptr = new int(val);
    }

    void set (int x) {
        *ptr = x;
    }
    void print() {
        cout << *ptr << " ";
    }
};

int main() {
    Test t1(10);
    Test t2(t1);
    t2.set(20);
    t1.print();
    t2.print();
    return 0;
}