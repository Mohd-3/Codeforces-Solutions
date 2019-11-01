#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, mx;
string s, ans, cur;
map<string, int> m;
int main()
{
    IOS
    cin >> n >> s;
    for (int i = 1; i < n; ++i) {
        cur = s.substr(i-1, 2);
        m[cur]++;
        if (m[cur] > mx) {
            mx = m[cur];
            ans = cur;
        }
    }
    cout << ans << endl;

    return 0;
}
