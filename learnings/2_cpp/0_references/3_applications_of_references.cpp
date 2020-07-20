#include <iostream>
#include <vector>
using namespace std;

// Application 3: Modifications in for each loop

int main() {
    vector <int> vect {10, 20, 30, 40};

    // No changes in the original vect vector as x is the copy of vector element and not the original element itself
    for(auto x: vect)
        x = x + 5; 
    for(auto x: vect)
        cout << x << " ";

    cout << endl;
    
    // Original vector changes as x contains the original vector elements
    for(auto &x: vect)
        x = x + 5; 
    for(auto x: vect)
        cout << x << " ";

    return 0;    
}