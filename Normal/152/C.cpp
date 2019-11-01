#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

string s;
int n, m, fr[101][26], cnt[101], M = 1e9+7;
ll ans=1;
int main() {
    //freopen("jumping.in", "r", stdin);
    IOS
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        for (int j = 0; j < m; ++j) {
            if (!fr[j][s[j]-'A']) {
                cnt[j]++;
            }
            fr[j][s[j]-'A']++;
        }
    }
    for (int i = 0; i < m; ++i) {
        ans *= cnt[i];
        if (ans>=M) {
            ans %= M;
        }
    }
    cout << ans << endl;
    return 0;


}
