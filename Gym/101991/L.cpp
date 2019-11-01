#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 int t, n, tmp, k, x;
int main()
{
    IOS
    freopen("looking.in", "r", stdin);
    cin >> t;
    while (t--) {
        cin >> n >> k;
        x = 0;
        for (int i = 0; i < n; ++i) {
            cin >> tmp;
            x |= tmp;
        }
        cout << x << endl;
    }
    return 0;
}