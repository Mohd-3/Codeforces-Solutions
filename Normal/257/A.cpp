#include <bits/stdc++.h>
using namespace std;

int n, m, k, arr[51];
int main() {
    cin >> n >> m >> k;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    if (m <= k) {
        cout << 0 << endl;
        return 0;
    }
    sort(arr, arr+n);
    int count = 0;
    for (int i = n-1; i >= 0; --i) {
        k--;
        m -= arr[i];
        count++;
        if (m <= 0 || m <= k) {
            m = 0;
            break;
        }
        if (k <= 0) {
            m++;
        }
    }
    cout << (m <= 0 ? count : -1) << endl;
    return 0;
}

