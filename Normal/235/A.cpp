#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define range(i, e) for(int (i) = 0; (i) < (e); ++(i))
#define nrange(i, s) for(int (i) = (s); ~i; --(i))
#define crange(i, s, e, inc) for(int (i) = (s); (i) < (e); (i)+=(inc))
#define cnrange(i, s, e, dec) for(int(i) = (s); (i) >= (e); (i)-=(dec))
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;

ll n;

ll lcm(ll a, ll b) {
    return (a*b) / __gcd(a, b);
}
int main() {
    IOS;
    cin >> n;
    if (n == 1) {
        cout << "1\n";
        return 0;
    }
    if (n == 2) {
        cout << "2\n";
        return 0;
    }
    if (n == 3) {
        cout << "6\n";
        return 0;
    }
    if (n&1) {
        cout << n*(n-1)*(n-2) << endl;
        return 0;
    };
    cout << max(lcm((n-1), lcm((n-2),(n-3))), lcm(n, lcm((n-1), (n-3)))) << endl;


    return 0;
}

