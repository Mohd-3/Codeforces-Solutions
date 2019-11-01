#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n, t, arr[16][2], dp[4][1<<16], M = 1e9+7;
 
int solve(int lst=0, int msk = 0) {
    int res = 0;
    for (int i = 0; i < n; ++i) {
        if (msk&1<<i) {
            res += arr[i][0];
        }
    }
    if (res == t) {
        return 1;
    }
    int& ret = dp[lst][msk];
    if (~ret) {
        return ret;
    }
    ret = 0;
    for (int i = 0; i < n; ++i) {
        if (!(msk&1<<i) && arr[i][1] != lst) {
            ret += solve(arr[i][1], msk|(1<<i));
            if (ret >= M) {
                ret -= M;
            }
        }
    }
    return ret;
}
int main() {
    IOS
    cin >> n >> t;
    memset(dp, -1, sizeof dp);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i][0] >> arr[i][1];
    }
    cout << solve() << endl;
 
    return 0;
 
 
}