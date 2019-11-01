#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;
 
int n, t;
ll a, b;
string s;
 
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> n >> a >> b >> s;
        vector<vector<ll>> dp(n+1, vector<ll>(2, 1e18));
        dp[0][0] = b+a+b;
        for (int i = 1; i < n; ++i) {
            if (s[i]=='0') {
                dp[i][0] = min(dp[i-1][0] + a + b, dp[i-1][1] + 2*a + 2*b);
            }
            dp[i][1] = min(dp[i-1][0] + 2*a + b*2, dp[i-1][1] + a + b*2);
        }
        cout << dp[n-1][0] << endl;
    }
    
    return 0;
}