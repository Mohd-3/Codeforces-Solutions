#include <bits/stdc++.h>
using namespace std;
int a1, a2, dp[1001][1001];

int solve(int a, int b) {
    if (a <= 0 or b <= 0 or (a == 1 and b == 1))
        return 0;
    int &ret = dp[a][b];
    if (~ret)
        return ret;
    return ret = 1 + max(solve(a+1, b-2), solve(a-2, b+1));
}
int main() {
    memset(dp, -1, sizeof dp);
    scanf("%d %d", &a1, &a2);
    printf("%d\n", solve(a1, a2));
    return 0;
}
