#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, m, k;
ll arr[5002], dp[5002][5002];

ll solve(int i = m, int j = 0) {
    if (j == k) {
        return 0;
    }
    if (i > n) {
        return -INF;
    }
    ll& ret = dp[i][j];
    if (~ret) {
        return ret;
    }
    return ret = max(arr[i]-arr[i-m] + solve(i+m, j+1), solve(i+1, j));

}
int main() {
    IOS
    cin >> n >> m >> k;
    memset(dp, -1, sizeof dp);
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    cout << solve() << endl;
    return 0;
}






