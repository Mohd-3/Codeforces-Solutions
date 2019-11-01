#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int t, n, k, mx, mn, tmp;
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> n >> k;
        mx = 0;
        mn = 1e9;
        for (int i = 0; i < n; ++i) {
            cin >> tmp;
            mx = max(mx, tmp);
            mn = min(mn, tmp);
        }
        mn += k;
        if (mn >= mx || mx-mn <= k) {
            cout << mn << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
