#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n, d, arr[30001], mx, tmp, dp[30001][250<<1];

int solve(int pos=d, int prv=d) {
    if (pos>30000)
        return 0;
    int j = prv-(d-250);
    int &ret = dp[pos][j];
    if (~ret)
        return ret;
    ret = 0;
    if (prv==1)
        ret = arr[pos] + max(solve(pos+prv, prv), solve(pos+prv+1, prv+1));
    else
        ret = arr[pos] + max(solve(pos+prv+1, prv+1), max(solve(pos+prv, prv), solve(pos+prv-1, prv-1)));
    return ret;
}
int main() {
    IOS
    cin >> n >> d;
    memset(dp, -1, sizeof dp);
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        arr[tmp]++;
        mx = max(mx, tmp);
    }
    cout << solve() << endl;
    return 0;
}

