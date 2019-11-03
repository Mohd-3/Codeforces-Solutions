#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m, t;
ll dp[31][31][62], f[33];

ll solve(int i = 0, int b = 0, int g = 0) {
    if (i > t) {
        return 0;
    }
    if (i == t) {
        if (b >= 4 && g >= 1 && b <= n && g <= m) {
            return (f[n]/(f[b]*f[n-b])) * (f[m]/(f[g]*f[m-g]));
        }
    }
    ll& ret = dp[i][b][g];
    if (~ret) {
        return ret;
    }
    return ret = solve(i+1, b, g+1) + solve(i+4, b+4, g);

}
int main() {
    IOS
    cin >> n >> m >> t;
    f[0] = 1;
    for (int i = 1; i <= 30; ++i) {
        f[i] = i * f[i-1];
    }
    memset(dp, -1, sizeof dp);
    cout << (solve()>>1) << endl;


    return 0;
}
