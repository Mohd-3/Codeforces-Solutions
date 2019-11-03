#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, dp[200001][3];
string s;

int solve(int i = 0, int lst = 0) {
    if (i==n)
        return 0;
    int &ret = dp[i][lst];
    if (~ret)
        return ret;
    ret = 0;
    if (((s[i]-'0')+lst)%3==0) {
        ret = 1 + solve(i+1, 0);
    } else {
        ret = max(solve(i+1, 0), solve(i+1, ((s[i]-'0')*10)%3));
    }
    return ret;
}
int main() {
    IOS
    cin >> s;
    n = s.size();
    memset(dp, -1, sizeof dp);
    cout << solve() << endl;
    return 0;
}



