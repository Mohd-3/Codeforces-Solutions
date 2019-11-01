#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

ll n, k;
vector<ll> v;
int main() {
    IOS;
    cin >> n >> k;
    for (int i = 1; i < k; ++i) {
        if (n%i == 0) {
            v.add(k*(n/i) +i);
        }
    }
    sort(v.begin(), v.end());
    cout << v[0] << endl;
    return 0;
}

