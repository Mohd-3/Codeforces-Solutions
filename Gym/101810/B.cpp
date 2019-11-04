#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;
 int t;
ll x, n, arr[1001];
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> x >> n;
        if (x>n) {
            ll tmp = x/n;
            for (int i = 0; i < n; ++i) {
                arr[i] = tmp;
            }
            ll rem = x%n;
            if (tmp&1) {
                for (int i = 0; i < n; ++i) {
                    if (!rem) {
                        break;
                    }
                    arr[i]++;
                    rem--;
                }
            } else {
                for (int i = n-1; ~i; --i) {
                    if (!rem) {
                        break;
                    }
                    arr[i]++;
                    rem--;
                }
            }
        } else {
            for (int i = 0; i < n; ++i) {
                if (!x)
                    break;
                arr[i]++;
                x--;
            }
        }
        for (int i = 0; i < n; ++i) {
            cout << arr[i] << " \n"[i==n-1];
        }
     }
        return 0;
}