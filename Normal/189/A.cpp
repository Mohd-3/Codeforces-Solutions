#include <bits/stdc++.h>
using namespace std;
int n, a, b, c, dp[4001];
int main() {
    scanf("%d %d %d %d", &n, &a, &b, &c);
    for (int i = 1; i <= n; ++i)
        dp[i] = -4000;
    for (int i = 1; i <= n; ++i) {
        if (i-a >= 0) {
            dp[i] = max(dp[i], dp[i-a]+1);
        }
        if (i-b >= 0) {
            dp[i] = max(dp[i], dp[i-b]+1);
        }
        if (i-c >= 0) {
            dp[i] = max(dp[i], dp[i-c]+1);
        }
    }
    printf("%d\n", dp[n]);
    return 0;
}

