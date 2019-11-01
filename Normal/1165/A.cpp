#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, x, y, cnt;
string s;

int main()
{
    IOS
    //freopen("kepler.in", "r", stdin);
    cin >> n >> x >> y >> s;
    for (int i = n-x; i < n-y-1; ++i) {
        if (s[i]=='1') {
            cnt++;
        }
    }
    for (int i = n-y; i < n; ++i) {
        if (s[i]=='1') {
            cnt++;
        }
    }
    if (s[n-y-1]=='0') {
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
