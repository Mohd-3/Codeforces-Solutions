#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

int n, m, x, y, black[1001], white[1001];
ll dp[1001][1001][2];
string arr[1001];

ll solve(int i = 0, int b = 0, int lst = 0) {
    if (i == m) {
        if (b>=x && b <= y){
            return 0;
        }
        return 1e9;
    }
    ll& ret = dp[i][b][lst];
    if (~ret) {
        return ret;
    }
    if (i == 0) {
        return ret = min(black[i] + solve(i+1, 1, 0), white[i] + solve(i+1, 1, 1));
    }
    ret = 1e9;
    if (lst) {
        if (b < y) {
            ret = min(ret, white[i] + solve(i+1, b+1, lst));
        }
        if (b >= x && b <= y) {
            ret = min(ret, black[i] + solve(i+1, 1, 0));
        }
    } else {
        if (b < y) {
            ret = min(ret, black[i] + solve(i+1, b+1, lst));
        }
        if (b >= x && b <= y) {
            ret = min(ret, white[i] + solve(i+1, 1, 1));
        }
    }
    return ret;

}
int main() {
    IOS
    cin >> n >> m >> x >> y;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int j = 0; j < m; ++j) {
        int b = 0;
        for (int i = 0; i < n; ++i) {
            b += (arr[i][j]=='#');
        }
        black[j] = n-b;
        white[j] = b;
    }
    memset(dp, -1, sizeof dp);
    cout << solve() << endl;
    return 0;
}





