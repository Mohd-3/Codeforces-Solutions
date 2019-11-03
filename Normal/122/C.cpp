#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

vector<ll> v;
ll l, r;

void gen(int i=0, ll num=0) {
    if (i > 10) {
        return;
    }
    num *= 10;
    v.emplace_back(num+4);
    v.emplace_back(num+7);
    gen(i+1, num+4);
    gen(i+1, num+7);
}
int main() {
    IOS
    cin >> l >> r;
    gen();
    //sort(v.begin(), v.end());
    int st = lower_bound(v.begin(), v.end(), l)-v.begin();
    ll ans = 0;
    while (l <= r) {
        ans += (min(v[st], r)-l+1)*v[st];
        l = v[st]+1;
        st++;
    }
    cout << ans << endl;

    return 0;
}
