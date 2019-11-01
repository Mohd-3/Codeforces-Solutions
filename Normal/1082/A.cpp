#include <bits/stdc++.h>
using namespace std;
int t, n, d, x, y;
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d %d %d", &n, &x, &y, &d);
        int ans = 1e9;
        if (abs(x-y)%d == 0) {
            ans = min(ans, abs(x-y)/d);
        }
        if ((y-1)%d == 0) {
            ans = min(ans, (x-1+(d-1))/d + ((y-1)/d));
        }
        if ((n-y)%d == 0) {
            ans = min((n-x+(d-1))/d + (n-y)/d, ans);
        }
        if (ans == 1e9)
            printf("-1\n");
        else
            printf("%d\n", ans);
    }
    return 0;
}

