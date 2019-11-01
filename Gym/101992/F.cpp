#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
  int t, n, m, x, y;
int main()
{
    IOS
    freopen("mosalah.in", "r", stdin);
    cin >> t;
    while (t--) {
        cin >> n >> m >> x >> y;
        if (!y) {
            if (m/(x+y) >= n) {
                cout << 0 << endl;
            } else {
                cout << -1 << endl;
            }
            continue;
        }
        cout << max(0, (x+y)*n - m) << endl;
    }
    return 0;
}