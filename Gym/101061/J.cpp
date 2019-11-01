#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;
 int n, m;
ll arr[100001], got[100001], t, x, y;
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> n >> m;
        memset(got, 0, sizeof got);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        while (m--) {
            cin >> x >> y;
            x--;
            got[x] += y;
        }
        for (int i = 0; i < n-1; ++i) {
            got[i+1] += max(0LL, got[i]-arr[i]);
            got[i] = min(got[i], arr[i]);
        }
        cout << max(0LL, got[n-1]-arr[n-1]) << endl;
        got[n-1] = min(got[n-1], arr[n-1]);
        for (int i = 0; i < n; ++i) {
            cout << got[i] << " \n"[i==n-1];
        }
    }
    return 0;
}
   