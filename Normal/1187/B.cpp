#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m, fr2[26];
string s1, s2;
int main() {
    IOS
    cin >> n >> s1 >> m;
    vector<vector<int>> fr(26, vector<int>(n));
    for (int i = 0; i < s1.size(); ++i) {
        fr[s1[i]-'a'][i]++;
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < 26; ++j) {
            fr[j][i] += fr[j][i-1];
        }
    }
    while (m--) {
        memset(fr2, 0, sizeof fr2);
        cin >> s2;
        for (int i = 0; i < s2.size(); ++i) {
            fr2[s2[i]-'a']++;
        }
        int ans = 0;
        for (int i = 0; i < 26; ++i) {
            int x = lower_bound(fr[i].begin(), fr[i].end(), fr2[i])-fr[i].begin();
            ans = max(ans, x+1);
        }
        cout << ans << endl;
    }

    return 0;
}
