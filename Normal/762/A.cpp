#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

ll n;
int k;
vector<ll> v;
int main()
{
    IOS
    cin >> n >> k;
    for (ll i = 1; i*i <= n; ++i) {
        if (n%i==0) {
            v.push_back(i);
            if (n/i != i) {
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(), v.end());
    if (k > v.size()) {
        cout << -1 << endl;
    } else {
        cout << v[k-1] << endl;
    }
    return 0;
}
