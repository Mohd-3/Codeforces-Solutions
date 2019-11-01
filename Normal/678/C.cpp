#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;
 
ll n, a, b, p, q;
int main() {
    cin >> n >> a >> b >> p >> q;
    ll lcm = (a*b) / __gcd(a, b);
    ll red = n/a - n/lcm;
    ll blue = n/b - n/lcm;
    ll both = n/lcm;
    cout << red*p + blue*q + both*(p > q ? p : q) << endl;
    return 0;
}