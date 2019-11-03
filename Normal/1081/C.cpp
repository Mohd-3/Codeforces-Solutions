#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n, m, k;
ll fact[10000001];
ll M = 998244353;

int main() {
    IOS;
    fact[0]= 1;
    for (int i = 1; i < 10000001; ++i) {
        fact[i] = (fact[i-1]%M * i%M)%M;
    }
    cin >> n >> m >> k;
    if (!k) {
        cout << m << endl;
        return 0;
    }
    ll sm = 0;
    for (int i = 1; i < n; ++i) {
        ll fct = (fact[k]%M + fact[m-k]%M)%M;
        sm = (sm%M + fact[fct]%M)%M;
    }
    cout << sm << endl;

    return 0;
}
