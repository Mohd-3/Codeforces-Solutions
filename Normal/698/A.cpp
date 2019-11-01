#include <bits/stdc++.h>
using namespace std;

int n, arr[1001], dp[101][4];

int solve(int i = 0, int last = 0) {
    if (i == n)
        return 0;
    int &ret = dp[i][last];
    if (~ret)
        return ret;
    if ((arr[i] == 1 && last == 1) || (arr[i] == 2 && last == 2) || arr[i] == 0) {
        ret = 1 + solve(i+1, 0);
    }
    else if (arr[i] == 1)
        ret = solve(i+1, 1);
    else if (arr[i] == 2)
        ret =  solve(i+1, 2);
    else if (last == 1)
        ret = solve(i+1, 2);
    else if (last == 2)
        ret =  solve(i+1, 1);
    else
        ret = min(solve(i+1, 1), solve(i+1, 2));
    return ret;
}
int main() {
    memset(dp, -1, sizeof dp);
    scanf("%d", &n);
    for (int i =0; i < n; ++i) {
        scanf("%d", arr+i);
    }
    printf("%d\n", solve());
    return 0;
}

