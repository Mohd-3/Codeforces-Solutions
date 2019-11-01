#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n, k, M = 1e9+7;
int dp[2001][2001];
int solve (int num = 1, int rem = k) {
    if (num > n)
        return 0;
    if (rem == 0) {
        return 1;
    }
    int &ret = dp[num][rem];
    if (~ret) {
        return ret;
    }
    ret = 0;
    for (int i = num; i <= n; i+=num) {
        ret = (ret%M + solve(i, rem-1)%M)%M;
    }
    return ret%M;
}
int main() {
    IOS;
    cin >> n >> k;
    memset(dp, -1, sizeof dp);
    cout << solve() << endl;
    return 0;
}

