#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back;
using ll = long long;
const int INF = 0x3f3f3f3f;

ll a, b, lc=1e9, n, tmp;
int main() {
    IOS
    cin >> a >> b;
    for (int i = 0; i < 500001; ++i) {
        tmp = ((a+i)*(b+i))/__gcd(a+i, b+i);
        if (tmp < lc) {
            lc = tmp;
            n = i;
        }
    }
    cout << n << endl;


    return 0;
}