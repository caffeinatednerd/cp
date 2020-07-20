#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Application 4: Avoiding copy of large objects in for each loops
// Combination of 2nd and 3rd application

int main() {
    vector <string> vect {"one", "two", "three"};
    for(const auto &x : vect)
        cout << x << " ";
    return 0;    
}