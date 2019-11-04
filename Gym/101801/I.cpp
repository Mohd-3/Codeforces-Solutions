#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
using namespace std;
 int t, n ,q, l, r, o, M=1e9+7;
ll arr[100001];
 ll p(ll a, ll b) {
    if (!b) {
        return 1;
    }
    ll ret = p(a, b>>1)%M;
    if (b&1) {
        return ((ret%M * ret%M)%M * a%M)%M;
    }
    return (ret%M * ret%M)%M;
}
int main() {
    //freopen("portals.in", "r", stdin);
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &n, &q);
        vector<ll> odd(n+1), even(n+1);
        for (int i = 1; i <= n; ++i) {
            scanf("%lld", &arr[i]);
            odd[i] = (arr[i]&1) + odd[i-1];
            even[i] = !(arr[i]&1) + even[i-1];
        }
         while (q--) {
            scanf("%d%d%d", &l, &r, &o);
            if (o) {
                ll ans = p(2, odd[r]-odd[l-1]);
                printf("%lld\n", ans-1);
            } else {
                ll tmp1 = p(2, odd[r]-odd[l-1])-1;
                ll tmp2 = p(2, even[r]-even[l-1])-1;
                ll ans = (tmp1 * (tmp2-1))%M;
                printf("%lld\n", max(ans, tmp2));
            }
        }
    }
      return 0;
}