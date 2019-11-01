#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const double PI = acos(-1);
using ll = long long;
using namespace std;
 
int t, n, arr[300001];
ll cost[300001];
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            cin >> arr[i] >> cost[i];
        }
        vector<vector<ll>> dp(n+1, vector<ll>(3, 1e18));
        dp[1][0] = 0;
        dp[1][1] = cost[1];
        dp[1][2] = cost[1]<<1;
 
        for (int i = 2; i <= n; ++i) {
            for (int lst = 0; lst < 3; ++lst) {
                for (int lst2 = 0; lst2 < 3; ++lst2) {
                    if (arr[i]+lst != arr[i-1]+lst2) {
                        dp[i][lst] = min(cost[i]*lst + dp[i-1][lst2], dp[i][lst]);
                    }
                }
            }
        }
        cout << min(dp[n][0], min(dp[n][1], dp[n][2])) << endl;
    }
    return 0;
}