#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;
 
int n, m, k, arr[19], c[19][19], a, b, ci;
ll dp[19][1<<19];
ll solve(int lst = 0, int msk = 0) {
    if (__builtin_popcount(msk) == m) {
        return 0;
    }
    ll& ret = dp[lst][msk];
    if (~ret) {
        return ret;
    }
    ret = 0;
    for (int i = 1; i <= n; ++i) {
        if (!(msk&1<<i)) {
            ret = max(ret, c[lst][i] + arr[i] + solve(i, msk|(1<<i)));
        }
    }
    return ret;
}
int main() {
    IOS
    cin >> n >> m >> k;
    for(int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }
    while (k--) {
        cin >> a >> b >> ci;
        c[a][b] = ci;
    }
    memset(dp, -1, sizeof dp);
    cout << solve() << endl;
    
    return 0;
}
 