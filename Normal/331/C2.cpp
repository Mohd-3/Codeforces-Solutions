#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
const int INF = 0x3f3f3f3f;
using ll = long long;
using namespace std;

ll n;
int f, mx, ans=1, cnt;
string s;
int main() {
    IOS
    cin >> s;
    if (s=="0") {
        cout << 0 << endl;
        return 0;
    }
    sort(s.begin(), s.end());
    for (int i = 0; i < (int) s.size()-1; ++i) {
        ans *= (int)(s[i]-'0')*2;
    }
    cout << ans +1 << endl;
}
