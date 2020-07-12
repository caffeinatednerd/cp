#include <iostream>
using namespace std;

// Shallow Copy (Default Constructor) -> By address change copy hota hai to copy karne ke baad change karne pe dono change ho jaate hain, T1 aur T2

// Deep Copy (Need to use our own copy constructor) -> Allocates new address for each copy 

class Test {
    int *ptr;
public:
    Test(int x) {
        ptr = new int(x);
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