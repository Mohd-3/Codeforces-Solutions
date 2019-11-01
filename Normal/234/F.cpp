#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, a, b, arr[201], dp[201][40001][2];

int solve(int i = 1, int r = 0, int g = 0, int c = 0) {
    if (i == n+1) {
        return 0;
    }
    int& ret = dp[i][r][c];
    if (~ret) {
        return ret;
    }
    ret = 1e9;
    if (r + arr[i] <= a) {
        ret = min(ret, (c==0) * min(arr[i], arr[i-1]) + solve(i+1, r+arr[i], g, 1));
    }
    if (g + arr[i] <= b) {
        ret = min(ret, (c==1) * min(arr[i], arr[i-1]) + solve(i+1, r, g+arr[i], 0));
    }
    return ret;

}
int main() {
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   scanf("%d%d%d", &n, &a, &b);
   for (int i = 1; i <= n; ++i) {
       scanf("%d", &arr[i]);
   }
   memset(dp, -1, sizeof dp);
   int ans = solve();
   if (ans == 1000000000) {
       puts("-1");
   } else {
       printf("%d\n", ans);
   }


    return 0;
}