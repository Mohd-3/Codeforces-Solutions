#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

ll a, b, x, y;
int main() {
    IOS
    cin >> a >> b >> x >> y;
    ll g = __gcd(x, y);
    ll x1 = x/g, y1 = y/g;
    cout << min(a/x1, b/y1) << endl;

    return 0;
}

