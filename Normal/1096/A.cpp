#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int t;
ll l, r;
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> l >> r;
        ll i = l, j = r;
        if (l == 1) {
            cout << 1 << " " << r << endl;
            continue;
        }
        if ((i<<1) <= r) {
            cout << i << " " << (i<<1) << endl;
            continue;
        }
        while (i < r) {
            if ((i<<1) <= r) {
                cout << i << " " << (i<<1) << endl;
                break;
            }
            i++;
        }
    }

    return 0;
}

