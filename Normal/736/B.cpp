#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

ll n;

bool isPrime(ll x) {
    if (x <= 1)
        return 0;
    if (x <= 3)
        return 1;
    if (x%2 == 0 || x%3 == 0)
        return 0;
    for (ll i = 5; i * i<=x; i+=6) {
        if (x%i==0 || x %(i+2) == 0)
            return 0;
    }
    return 1;
}
int main() {
    IOS
    cin >> n;
    if (isPrime(n)) {
        cout << 1 << endl;
    } else if (!(n&1) || isPrime(n-2)) {
        cout << 2 << endl;
    } else {
        cout << 3 << endl;
    }
    return 0;
}





