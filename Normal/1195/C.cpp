#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n, arr[2][100001];
 
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }
    vector<vector<ll>> dp(n+1, vector<ll>(2));
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < 2; ++j) {
            dp[i][j] = max(dp[i-1][j], dp[i-1][j^1] + arr[j][i-1]);
        }
    }
    cout << max(dp[n][0], dp[n][1]) << endl;
 
 
    return 0;
 
 
}