#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, v, ans, x;

int main() {
    scanf("%d%d", &n, &v);
    for (int i = 1; i < n; ++i) {
        if (x < n-i && x < v) {
            int need = n-i-x;
            ans += min(v-x, need)*i;
            x += min(v-x, need);
        }
        x--;
    }
    printf("%d\n", ans);
    return 0;
}
