#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 int t, n, fr, mx, ans;
map<int, int> m;
string s;
 int main()
{
    IOS
    //freopen("looking.in", "r", stdin);
    cin >> t;
    while (t--) {
        m.clear();
        cin >> n;
        while (n--) {
            cin >> s >> fr;
            m[fr]++;
        }
        mx = 0;
        for (auto p : m) {
            if (p.second > mx) {
                mx = p.second;
                ans = p.first;
            }
        }
        cout << ans << endl;
     }
    return 0;
}