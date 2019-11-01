#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;
 
int n, arr[200001], mx, cnt;
ll x, ans=1e18, dv=1e18;
vector<ll> v;
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }
    for (int i = 0; i < n; ++i) {
        if (arr[i] < mx) {
            cnt++;
            x += mx-arr[i];
            v.emplace_back(mx-arr[i]);
        }
    }
    ll g = 0;
    for (ll d : v) {
        g = __gcd(d, g);
    }
    cout << x / g << " " << g << endl;
    return 0;
}
 