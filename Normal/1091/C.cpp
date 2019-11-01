#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

ll n;
vector<int> v;
set<ll> vv;


int main() {
    IOS
    cin >> n;
    for (int i = 1; i*i <=n; ++i) {
        if (n%i==0) {
            v.add(i);
            if (n/i!=i) {
                v.add(n/i);
            }
        }
    }
    for (int x : v) {
        ll cnt = n/x;
        vv.insert(cnt * (cnt-1)/2*x+cnt);
    }
    for (auto x : vv) {
        cout << x << " ";
    }
    cout << endl;

    /*
    for (int i = 0; i < vv.size(); ++i) {
        cout << vv[i] << " \n"[i==vv.size()-1];
    }
    */

    return 0;
}

