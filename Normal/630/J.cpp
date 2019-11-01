#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

ll n;
int main() {
    IOS
    ll d = 2;
    for (ll i = 3; i < 11; ++i) {
        d = (d*i)/__gcd(d, i);
    }
    cin >> n;
    cout << n / d << endl;
    
    return 0;
}










