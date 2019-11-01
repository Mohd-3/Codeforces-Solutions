#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int t, n, c, a[200001], b[200001];

int main() {
    scanf("%d%d", &n, &c);
    for (int i = 1; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < n; ++i) {
        scanf("%d", &b[i]);
    }
    vector<vector<int>> dp(n+1, vector<int>(2, 1e9));
    dp[0][0] = 0;
    dp[0][1] = c;
    for (int i = 1; i < n; ++i) {
        dp[i][0] = min(dp[i-1][0] + a[i], dp[i-1][1] + a[i]);
        dp[i][1] = min(dp[i-1][0] + c + b[i], dp[i-1][1] + b[i]);
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ", min(dp[i][0], dp[i][1]));
    }
    puts("");
    return 0;
}


