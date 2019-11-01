#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 int t, fr[26], ans;
string s1, s2;
int main()
{
    IOS
    //freopen("looking.in", "r", stdin);
    cin >> t;
    while (t--) {
        ans = 0;
        memset(fr, 0, sizeof fr);
        cin >> s1 >> s2;
        for (int i = 0; i < s2.size(); ++i) {
            fr[s2[i]-'a']++;
        }
        for (int i = 0; i < s1.size(); ++i) {
            if (!fr[s1[i]-'a']) {
                break;
            }
            ans++;
            fr[s1[i]-'a']--;
        }
        cout << ans << endl;
      }
    return 0;
}