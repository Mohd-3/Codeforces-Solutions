#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int t, n, k;
string s, arr[3], r = "RGB";
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> n >> k >> s;
        vector<vector<int>> dp(n+1, vector<int>(3));
        for (int i = 1; i <= n; ++i) {
            if (s[i-1] == 'R') {
                dp[i][0] += dp[i-1][2];
                dp[i][1] = 1 + dp[i-1][0];
                dp[i][2] = 1 + dp[i-1][1];
            } else if (s[i-1] == 'G') {
                dp[i][1] += dp[i-1][0];
                dp[i][0] = 1 + dp[i-1][2];
                dp[i][2] = 1 + dp[i-1][1];
            } else {
                dp[i][2] += dp[i-1][1];
                dp[i][0] = 1 + dp[i-1][2];
                dp[i][1] = 1 + dp[i-1][0];
            }
 
        }
       
        int mn = 1e9;
        for (int j = 0; j < 3; ++j) {
            for (int i = k; i <= n; ++i) {
                int en = (k-1)%3;
                en += j;
                en += 3;
                en %= 3;
                int st = (j-1)+3;
                st %=3;
               mn = min(mn, dp[i][en]-dp[i-k][st]);
            }
        }
 
        cout << mn << endl;
    }
 
 
}