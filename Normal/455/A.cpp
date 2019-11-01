#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, tmp, mx;
ll fr[100001], dp[100001];
int main()
{
    IOS
    //freopen("kepler.in", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        mx = max(mx, tmp);
        fr[tmp]++;
    }
    dp[1] = fr[1];
    for (int i = 2; i <= mx; ++i) {
        dp[i] = max(fr[i]*i+dp[i-2], dp[i-1]);
    }
    cout << dp[mx] << endl;
    return 0;
}
