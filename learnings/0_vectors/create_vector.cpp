#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    vector<vector <int>> vec(n);

    for(int i=0; i<n; i++) {
        int k;
        cin >> k;
        // vec[i] = vector<int> (k);
        for(int j=0; j<k; j++) {
            int ele;
            cin >> ele;

            // =====================================================

            vec[i].push_back(ele); // Why doesn't this work
            
            // vec[i][j] = ele; // but this does?

            // =====================================================
        }
    }

    int a, b;
    for(int i=0; i<q; i++) {
        cin >> a >> b;
        cout << vec[a][b] << endl;
    }

    return 0;
}