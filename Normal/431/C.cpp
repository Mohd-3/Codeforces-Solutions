#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, k, d, M=1e9+7, dp[10001][2];

int solve(int sum=0, int got = 0) {
    if (sum > n) {
        return 0;
    }
    if (sum == n) {
        return got;
    }
    int& ret = dp[sum][got];
    if (~ret) {
        return ret;
    }
    ret = 0;
    for (int i = 1; i <= k; ++i) {
        ret += solve(sum+i, got | i>=d);
        if (ret >= M) {
            ret -= M;
        }
    }
    return ret;
}
int main()
{
    IOS
    //freopen("planet.in", "r", stdin);
    memset(dp, -1, sizeof dp);
    cin >> n >> k >> d;
    cout << solve() << endl;

    return 0;
}
