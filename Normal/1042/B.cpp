#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n, c[1001], dp[1001][1<<3+1];
string v[1001];


int solve(int i = 0, int msk = 0) {
    if (msk==7)
        return 0;
    if (i==n)
        return 1e9;
    int &ret = dp[i][msk];
    if (~ret)
        return ret;
    ret = 0;
    int msk2 = msk;
    for (int j = 0; j < v[i].size();++j) {
        if (v[i][j]=='C')
            msk2 |= 1<<2;
        else if (v[i][j]=='B')
            msk2 |= 1<<1;
        else
            msk2 |= 1;
    }
    return ret = min(solve(i+1, msk), c[i] + solve(i+1, msk2));
}
int main() {
    IOS
    cin >> n;
    memset(dp, -1, sizeof dp);
    for (int i = 0; i < n; ++i) {
        cin >> c[i] >> v[i];
    }
    int ans = solve();
    cout << (ans == 1e9 ? -1 : ans) << endl;

    return 0;
}

