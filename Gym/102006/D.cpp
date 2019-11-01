#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;
 int t, n, m, c[501], s[501][501], b[501];
char arr[501][501];
int main() {
    freopen("balls.in", "r", stdin);
    scanf("%d", &t);
    while (t--) {
                scanf("%d%d", &n, &m);
        memset(s, 0, sizeof s);
        for (int i = 0; i < m; ++i) {
            scanf("%d", &b[i]);
        }
         for (int i = 0; i < n; ++i) {
            scanf("%s", arr[i]);
        }
        for (int i = 0; i < m; ++i) {
            scanf("%d", &c[i]);
        }
        for (int i = 0; i < m; ++i) {
            s[n][i] = c[i];
        }
        for (int i = n-1; ~i; --i) {
            for (int j = m-1; ~j; --j) {
                s[i][j] = s[i+1][j];
                if (arr[i][j] != '.') {
                    if (j < m-1) {
                        s[i][j] = max(s[i][j], s[i+1][j+1]);
                    }
                     if (j) {
                        s[i][j] = max(s[i][j], s[i+1][j-1]);
                    }
                }
            }
        }
        ll ans = 0;
        for (int i = 0; i < m; ++i) {
            ans += 1LL * b[i] * s[0][i];
        }
        printf("%lld\n", ans);
     }
      return 0;
}