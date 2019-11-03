#include <bits/stdc++.h>
using namespace std;

int n, arr[5002], dp[5002][5002];

int solve(int i = 1, int last = 0) {
    if (i == n+1)
        return 0;
    int &ret = dp[i][last];
    if (~ret)
        return ret;
    return ret = min(1 + solve(i+1, 0), (arr[i] <= arr[last] ? 0 : arr[i]-arr[last]) + solve(i+1, i));
}
int main() {
    scanf("%d", &n);
    memset(dp, -1, sizeof dp);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", arr+i);
    }
    printf("%d\n", solve());
    return 0;
}

