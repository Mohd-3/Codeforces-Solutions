#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

ll x, y, k, mx;
int main()
{
    IOS
    cin >> x >> y >> k;
    if (y%k > x %k && k - y%k <= x%k) {
        mx = k - y%k;
        y += k - y%k;
    } else if (x%k > y%k && k - x%k <= y%k) {
        mx = k - x%k;
        x += mx;

    }
    cout << (x+y)/k << " " << mx << endl;
    return 0;
}
