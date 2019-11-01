#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int t, n, p;
string s;
int main()
{
    IOS
    //freopen("kepler.in", "r", stdin);
    cin >> t;
    while (t--) {
        cin >> n >> s;
        p = -1;
        for (int i = 0; i < n; ++i) {
            if (s[i]=='8') {
                p=i;
                break;
            }
        }
        if (p == -1 || n-p < 11) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
