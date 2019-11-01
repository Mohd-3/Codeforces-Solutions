#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

ll n, m, k;

bool ok(ll x) {
    x--;
    ll cnt = 0;
    for (ll i = 1; i <= n; ++i) {
        cnt += min(x/i, m);
    }
    return cnt < k;
}
int main() {
    cin >> n >> m >> k;
    ll lo = 1, hi = n*m, mid, ans=-1;
    while (lo<=hi) {
        mid = lo+((hi-lo)>>1);
        if (ok(mid)) {
            ans = mid;
            lo = mid+1;
        } else {
            hi = mid-1;
        }
    }
    cout << ans << endl;
    return 0;
}



