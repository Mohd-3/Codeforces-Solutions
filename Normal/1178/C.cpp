#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
 
ll n, m, M = 998244353;
ll ans;
 
ll p(ll x, ll y) {
    if (!y) {
        return 1;
    }
    ll ret = p(x, y>>1);
    ret = (ret%M * ret%M)%M;
    if (y&1) {
        ret = (ret%M * x%M)%M;
    }
    return ret;
}
int main() {
    IOS
    cin >> n >> m;
    cout << (p(2, n) * p(2, m))%M << endl;
 
 
 
}