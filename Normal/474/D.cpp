#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int t, k, M = 1e9+7, a, b;
vector<int> dp(100001);
int main()
{
    IOS

    cin >> t >> k;
    dp[0] = 1;
    for (int i = 1; i < 100001; ++i) {
        dp[i] += dp[i-1];
        if (k <= i) {
            dp[i] += dp[i-k];
        }
        if (dp[i] >= M) {
            dp[i] -= M;
        }
    }
    for (int i = 1; i < 100001; ++i) {
        dp[i] += dp[i-1];
        if (dp[i] >= M) {
            dp[i] -= M;
        }
    }
    while (t--) {
        cin >> a >> b;
        cout << (((dp[b] - dp[a-1])%M)+M)%M << endl;
    }





    return 0;

}
