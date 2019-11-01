#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int t;
ll x, y, a, b, h, w;
char op;
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> op;
        if (op=='+') {
            cin >> x >> y;
            a = max(a, min(x, y));
            b = max(b, max(x, y));
        } else {
            cin >> h >> w;
            if (a <= min(h, w) && b <= max(h, w)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    
    return 0;
}





