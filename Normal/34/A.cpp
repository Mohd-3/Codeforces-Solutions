#include <bits/stdc++.h>
using namespace std;

int n, arr[101], idx1, idx2, mn = 1e9;
int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; ++i) {
        if (i == 0) {
            if (abs(arr[i]-arr[n-1]) < mn) {
                mn = abs(arr[i]-arr[n-1]);
                idx1 = i+1;
                idx2 = n;
            }
        }
        if (abs(arr[i]-arr[i+1]) < mn) {
            mn = abs(arr[i]-arr[i+1]);
            idx1 = i+1;
            idx2 = i+2;
        }
    }
    cout << idx1 << " " << idx2 << endl;
    
    return 0;
}

