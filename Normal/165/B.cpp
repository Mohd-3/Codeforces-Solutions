#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

ll n, k;

bool ok(ll x) {
    ll kk = k;
    ll tot = x;
    while (x/kk != 0) {
        tot += x/kk;
        kk *= k;
    }
    return tot >= n;

}
int main()
{
    IOS
    //freopen("planet.in", "r", stdin);


    cin >> n >> k;

    ll lo = 0, hi = 1e9, mid;
    while (lo<hi) {
        mid = lo+((hi-lo)>>1);
        if (ok(mid)) {
            hi=mid;
        } else {
            lo=mid+1;
        }
    }
    cout << lo << endl;


    return 0;
}
