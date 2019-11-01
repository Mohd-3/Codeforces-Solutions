#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, mx, arr[101];
ll total;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    ll best = 1e9;
    for (int idx = 0; idx < n; ++idx) {
        total = 0;
        for (int i = 1; i < n; ++i) {
            total += (abs(idx-i)+i+idx + idx+i+abs(i-idx))*arr[i];
        }
        total += idx*4*arr[0];
        best = min(best, total);
    }
    cout << best << "\n";
    
    return 0;
}

