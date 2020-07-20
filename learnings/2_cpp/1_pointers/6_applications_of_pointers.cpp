#include <iostream>
using namespace std;

// Applications:

// 3. Dynamic Memory Allocation
// 4. Implementing data structures like linked list, BST, Tress, etc.
// 5. To do system level programming (shared memory, multiple threads)


// 6. To return MULTIPLE values
void getAddMul(int x, int y, int *aPtr, int *mPtr) {
    *aPtr = x + y;
    *mPtr = x * y;
}

int main() {
    int x = 10, y = 20, a, m;
    getAddMul(x, y, &a, &m);
    cout << a << " " << m;
    return 0;    
}