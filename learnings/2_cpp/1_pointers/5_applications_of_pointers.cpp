#include <iostream>
#include <vector>
using namespace std;

// Apllication 2
// Passing large objects (Avoiding copying)
// Saves time and memory

// In C++, References are a good choice than pointers to implement this as they are cleaner
// But since C language does not have references
// Pointers will be a good choice there to avoid shallow copying of objects

void processVector(vector<int> *v) {

}

int main() {
    vector <int> v;
    for(int i=0; i<1000; i++)
        v.push_back(i);
    processVector(&v);
    return 0;    
}