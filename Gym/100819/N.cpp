#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const double PI = acos(-1);
using ll = long long;
using namespace std;
 int n, k, d, mx, mn=1e9;
string s;
int main() {
    IOS
    cin >> n >> k;
    while (n--) {
        cin >> d >> s;
        if (s[0]=='B') {
            mn = min(mn, d);
        } else {
            mx = max(mx, d);
        }
    }
    if (mn==1e9) {
        cout << mx+1 << " ";
    } else {
        if (mx == 0) {
            cout << 1 << " ";
        } else {
            cout << mx+1 << " ";
        }
    }
    if (mx == 0) {
        cout << mn-1 << endl;
    } else {
        if (mn == 1e9) {
            cout << mx << endl;
        } else {
            cout << mn-1 << endl;
        }
    }
    return 0;
}