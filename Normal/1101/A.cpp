#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int q;
ll l, r, d;
int main() {
    IOS
    cin >> q;
    while (q--) {
        cin >> l >> r >> d;
        if (d < l || d > r) {
            cout << d << endl;
        } else {
            if (r%d==0) {
                cout << r+d << endl;
            } else {
                ll tmp = r - r%d;
                tmp += d;
                while (tmp <= r) {
                    tmp += d;
                }
                cout << tmp << endl;
            }
        }
    }
    
    return 0;
}





