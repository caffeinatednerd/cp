#include <iostream>
#include <vector>
using namespace std;

// Application 2: Avoiding copy of large objects during function calls

// It saves time and space in case of large objects
// Adding & in parameters of print avoid making copy of the vector

// TIP: To make the vector read_only inside a function, add const keyword before it
// Only access and not modify

void print(const vector <int> &v) {
    for(auto x : v)
        cout << x << " ";
}

int main() {
    vector <int> v;
    for(int i=0; i<1000; i++)
        v.push_back(i);
    print(v);
    return 0;    
}