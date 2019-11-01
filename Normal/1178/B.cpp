#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
ll sm, ans;
string s;
int cnt[1000001], cnt2[1000001];
int main() {
    IOS
    cin >> s;
    for (int i = 1; i < (int) s.size(); ++i) {
        if (s[i-1]=='v' && s[i]=='v') {
            cnt[i] = cnt[i-1]+1;
        } else {
            cnt[i] = cnt[i-1];
        }
    }
    for (int i = s.size()-2; ~i; --i) {
        if (s[i+1]=='v' && s[i]=='v') {
            cnt2[i] = cnt2[i+1]+1;
        } else {
            cnt2[i] = cnt2[i+1];
        }
    }
    for (int i = 1; i < (int) s.size()-1; ++i) {
        if (s[i]=='o') {
            ans += 1LL * cnt[i-1] * cnt2[i+1];
        }
    }
    cout << ans << endl;
    return 0;
}