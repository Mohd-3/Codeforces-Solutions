#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int t, n, q, arr[201], cur, st;
int main() {
    IOS
    cin >> t;
    while (t--) {
        cur = 1;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            if (arr[i] == 1) {
                st = i;
            }
        }
        bool ok = true;
        int x = st;
 
        while (cur != n) {
            if (arr[x] != cur) {
                ok = false;
                break;
            }
            cur++;
            x = (x+1)%n;
        }
        if (ok) {
            cout << "YES" << endl;
            continue;
        }
        ok = true;
        x = st;
        cur = 1;
        while (cur != n) {
            if (arr[x] != cur) {
                ok = false;
                break;
            }
            cur++;
            x = ((x-1)+n)%n;
        }
        if (ok) {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
 
 
}