#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, ele;
    cin >> n;
    vector<int> v(n);
    for(auto &i: v){
        cin >> i;
    }

    for(auto i: v) {
        cout << i <<" ";
    }
    return 0;
}
