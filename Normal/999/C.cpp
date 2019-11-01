#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, k, fr[26];
string s, ans;
int main() {
    IOS
    cin >> n >> k >> s;
    for (int i = 0; i < n; ++i) {
        fr[s[i]-'a']++;
    }
    reverse(s.begin(), s.end());
    for (int i = 0; i < 26; ++i) {
        if (!k)
            break;
        int mn = min(fr[i], k);
        fr[i] -= mn;
        k -= mn;

    }
    for (int i = 0; i < n; ++i) {
        if (fr[s[i]-'a']) {
            ans.add(s[i]);
            fr[s[i]-'a']--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;


    return 0;
}


