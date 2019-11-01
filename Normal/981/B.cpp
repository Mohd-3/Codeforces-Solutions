#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n, m;
ll x, y;
unordered_map<ll, ll> a;
int main() {
    IOS;
    cin >> n;
    while (n--) {
        cin >> x >> y;
        a[x] = y;
    }
    cin >> m;
    while (m--) {
        cin >> x >> y;
        a[x] = max(a[x], y);
    }
    ll tot = 0;
    for (auto x : a) {
        tot += x.second;
    }
    cout << tot << endl;


    return 0;
}

