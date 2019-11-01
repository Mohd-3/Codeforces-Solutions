#include <bits/stdc++.h>
using namespace std;
int n, m, b[101], g[101], dp[101][101];

int solve(int i = 0, int j = 0) {
    if (i == n || j == m)
        return 0;
    int &ret = dp[i][j];
    if (~ret)
        return ret;
    if (abs(b[i]-g[j]) <= 1) {
        ret = 1 + solve(i+1, j+1);
    } else {
        ret = max(solve(i+1, j), solve(i, j+1));
    }
    return ret;
    
}
int main() {
    memset(dp, -1, sizeof dp);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", b+i);
    }
    scanf("%d", &m);
    for (int i = 0; i < m; ++i) {
        scanf("%d", g+i);
    }
    sort(b, b+n, greater<int>());
    sort(g, g+m, greater<int>());
    printf("%d\n", solve());
    return 0;
}

