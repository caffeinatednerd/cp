#include <iostream>
using namespace std;

class Test {
public:
    Test() { cout<<"Default\n"; }
    Test(int a) { cout<<"Parametrized"; }
};

class Main {
    Test t;
public:
    Main() : t(10) // Initializer Lists -> Improves Perf.
    {
        // t = Test(10);
    }
};

int main() {
    Main M;
    return 0;
}