#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;
ll x, y;

ll gcd(ll a, ll b, ll cnt) {
    if (!b) {
        return cnt;
    }
    return gcd(b, a%b, cnt+a/b);
}
int main() {
    IOS;
    cin >> x >> y;
    cout << gcd(x, y, 0) << endl;

    return 0;
}

