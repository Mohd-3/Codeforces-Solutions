#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

ll n;
ll mx = 1e9;
vector<ll> v;

void gen(ll j = 0) {
    ll a = j*10LL + 4;
    ll b = j*10LL + 7;
    if (a < mx) {
        v.add(a);
        gen(a);
    }
    if (b < mx) {
        v.add(b);
        gen(b);
    }
}

int main() {
    IOS
    gen();
    cin >> n;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); ++i) {
        if (v[i]==n) {
            cout << i+1 << endl;
            return 0;
        }
    }
    return 0;
}

