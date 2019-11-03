#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int t, n;
ll s, l, r;
ll arr[200001], mx[200001], mn[200001];
bool ok(ll x) {
    ll cur = s;
    int idx = n/2+1;
    for (int i = idx; i < n; ++i) {
        if (max(0LL, x-arr[i]) > cur || x > mx[i]) {
            return false;
        }
        cur -= max(0LL, x-arr[i]);
    }
    return true;
}
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d%lld", &n, &s);
        ll oldS = s;
        for (int i = 0; i < n; ++i) {
            scanf("%lld%lld", &l, &r);
            arr[i] = 0;
            mx[i] = r;
            arr[i]=l;
            s-= l;
        }
        sort(arr, arr+n);
        ll lo = 0, hi = oldS, mid, ans = -1;
        while (lo <= hi) {
            mid = lo+((hi-lo)>>1);
            if (ok(mid)) {
                ans = mid;
                lo = mid+1;
            } else {
                hi = mid-1;
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}



