#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

int a, b, n, M=1e9+7;
ll sm, f[1000001];
bool good() {
    ll tmp = sm;
    while (tmp) {
        int cur = tmp%10;
        if (cur != a && cur != b) {
            return false;
        }
        tmp/=10;
    }
    return true;
}

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
    scanf("%d%d%d", &a, &b, &n);
    f[0] = 1;
    for (int i = 1; i <= n; ++i) {
        f[i] = (i%M * f[i-1]%M)%M;
    }
    sm = n * a;
    ll cntA = n, cntB = 0;
    ll ans = 0;
    while (cntA>=0) {
        if (good()) {
            ll fact = f[n];
            ll inv = f[cntA] * f[cntB];
            inv %= M;
            inv = p(inv, M-2);
            ll res = (fact%M * inv%M)%M;
            ans += res;
            if (ans >= M) {
                ans %= M;
            }
        }
        sm -= a;
        sm += b;
        cntA--;
        cntB++;
    }
    printf("%lld\n", ans);


    return 0;
}