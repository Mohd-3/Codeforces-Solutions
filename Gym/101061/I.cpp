#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;
 int t, fr[26], fr2[26];
string s1, s2;
int n, m;
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> s1 >> s2;
        n = s1.size();
        m = s2.size();
        memset(fr, 0, sizeof fr);
        memset(fr2, 0, sizeof fr2);
        for (int i = 0; i < n; ++i) {
            fr[s1[i]-'a']++;
        }
        for (int i = 0; i < m; ++i) {
            fr2[s2[i]-'a']++;
        }
        int cnt = 0;
        for (int i = 0; i < 26; ++i) {
            cnt += abs(fr[i]-fr2[i]);
        }
        cout << cnt << endl;
    }
    return 0;
}