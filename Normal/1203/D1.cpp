#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
string s, p;
int n, m;
 
bool ok(int x) {
    int c = 0;
    for (int i = 0; i <= n-x; ++i) {
        c = 0;
        for (int j = 0; j < n; ++j) {
            if (c == m) {
                //cout << "I: " << i << " " << x << endl;
                break;
            }
            if (j<i || j >= i+x) {
                if (s[j]==p[c]) {
                //cout << "I: " << i << " " << j << " " << c << endl;
                    c++;
                }
            }
        }
        if (c==m) {
            return true;
        }
    }
    return c == m;
}
int main() {
    IOS
    cin >> s >> p;
    n = s.size();
    m = p.size();
    int lo = 0, hi = n, mid, ans = 0;
    while (lo<=hi) {
        mid = lo+((hi-lo)>>1);
        if (ok(mid)) {
            ans = mid;
            lo = mid+1;
        } else {
            hi = mid-1;
        }
    }
    cout << ans << endl;
    return 0;
 
 
}