#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m, tot, tmp;
ll t[101];
int main() {
    IOS
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        tot += tmp;
        if (tot <= m) {
            cout << 0 << " \n"[i==n-1];
        } else {
            ll re = 0, need = tot-m, cnt = 0;
            for (int j = 100; j >= need; --j) {
                if (t[j]) {
                    cout << 1 << " \n"[i==n-1];
                    need = 0;
                    break;
                }
            }
            if (need) {
                for (int j = min(need-1, 100LL); j > 0; --j) {
                    if (!t[j]) {
                        continue;
                    }

                    ll div = (need+(j-1))/j;
                    cnt += min(div, t[j]);
                    need -= min(div, t[j])*j;
                    if (need<=0) {
                        break;
                    }
                }
                cout << cnt << " \n"[i==n-1];
            }
        }
        t[tmp]++;

    }


    return 0;
}
