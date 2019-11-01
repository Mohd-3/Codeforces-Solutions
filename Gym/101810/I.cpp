#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;
 int t, n, x, v[1001];
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> x >> n;
        memset(v, 0, sizeof v);
        for (int i = 0; i < n; ++i) {
            v[i] = x/n;
        }
        int m = x%n;
        for (int i = n-1; ~i; --i) {
            if (!m)
                break;
            v[i]++;
            m--;
        }
        bool good = 1;
        for (int i = 0; i < n; ++i) {
            if (!v[i]) {
                good = 0;
                break;
            }
        }
        if (!good) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < n; ++i) {
                cout << v[i] << " \n"[i==n-1];
            }
        }
    }
        return 0;
}
      