#include <iostream>
using namespace std;

int *my_func(int arr[], int sum, int n) {
    static int a[] = {-1, -1};
    int ind_start=-1, ind_end=-1;
    for(int j=0; j<n; j++) {
        int sum_ele=0;
        for(int k=j; k<n; k++) {
            sum_ele += arr[k];
            if(sum_ele == sum) {
                ind_start = j;
                ind_end = k;
                a[0] = ind_start+1;
                a[1] = ind_end+1;
                return a;
            }
        }
    }
    return a;
}

int main() {
    int t, n, sum, arr[10000];
    cin >> t;
    for(int i=0; i<t; i++) {
        cin >> n >> sum;
        for(int j=0; j<n; j++) {
            cin >> arr[j];
        }
        
        int *res = my_func(arr, sum, n);
        if(res[0] == -1) 
            cout << res[0];    
        else
            cout << res[0] << " " << res[1] << endl;
    }
    return 0;
}