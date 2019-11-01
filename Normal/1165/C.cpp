#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, cnt;
string s, ans;

int main()
{
    IOS
    //freopen("kepler.in", "r", stdin);
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        if (cnt%2) {

            if (ans.back() == s[i]) {
                continue;
            } else {
                ans.push_back(s[i]);
                cnt++;
            }
        } else {
            ans.push_back(s[i]);
            cnt++;
        }
    }
    if (ans.size()%2) {
        ans.pop_back();
    }
    cout << s.size()-ans.size() << endl;
    cout << ans << endl;
    return 0;
}
