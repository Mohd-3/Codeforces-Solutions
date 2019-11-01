#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int t;
ll n, a, b;
int main()
{
    IOS
    cin >> t;
    while (t--) {
        cin >> n >> a >> b;
        if (b>=2*a) {
            cout << a*n << endl;
        } else {
            cout << (n/2)*b + (n%2)*a << endl;
        }
    }
    return 0;
}
