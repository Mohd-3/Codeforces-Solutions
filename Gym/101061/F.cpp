#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;
 int t, n, arr[101], dp[101][1001][1001];
 int solve(int i = 0, int sm1 = 0, int sm2 = 0) {
    if (i == n) {
        return abs(sm1-sm2);
    }
    int& ret = dp[i][sm1][sm2];
    if (~ret) {
        return ret;
    }
    return ret = min(max(abs((sm1+arr[i])-sm2), solve(i+1, sm1+arr[i], sm2)), max(abs((sm2+arr[i])-sm1), solve(i+1, sm1, sm2+arr[i]))); 
}
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        memset(dp, -1, sizeof dp);
        cout << solve() << endl;
    }
    return 0;
}
      