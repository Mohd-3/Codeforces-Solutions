#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n;
ll ttt;
vector<ll> v, ans;
unordered_map<ll, int> m;

bool check(ll x) {
    if (ans.size()==n) {
        for (auto i : ans) {
            cout << i << " ";
        }
        return 1;
    }
    if (m[x<<1]>0) {
        m[x<<1]--;
        ans.add(x<<1);
        if (check(x<<1))
            return 1;
        ans.pop_back();
        m[x<<1]++;
    }
    if (x%3==0 && m[x/3]>0) {
        m[x/3]--;
        ans.add(x/3);
        if (check(x/3))
            return 1;
        ans.pop_back();
        m[x/3]++;
    }
    return 0;
}
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> ttt;
        v.add(ttt);
        m[v[i]]++;
    }
    for (auto x : v) {
        ans.add(x);
        m[x]--;
        if (check(x)) {
            break;
        }
        m[x]++;
        ans.pop_back();
    }
    return 0;
}


