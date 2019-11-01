#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, k1, k2, cnt;
queue<int> a, b;
int main() {
    IOS
    cin >> n >> k1;
    while (k1--) {
        cin >> k2;
        a.push(k2);
    }
    cin >> k2;
    while (k2--) {
        cin >> k1;
        b.push(k1);
    }
    while (++cnt) {
        if (a.empty()) {
            cout << cnt-1 << " " << 2 << endl;
            return 0;
        }
        if (b.empty()) {
            cout << cnt-1 << " " << 1 << endl;
            return 0;
        }
        if (cnt == 1000) {
            cout << -1 << endl;
            return 0;
        }
        int aa = a.front();
        a.pop();
        int bb = b.front();
        b.pop();
        if (aa > bb) {
            a.push(bb);
            a.push(aa);
        } else {
            b.push(aa);
            b.push(bb);
        }
    }

    return 0;
}
