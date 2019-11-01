#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

int t, a, b, c, d, n;
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d%d%d%d", &a, &b, &c, &d, &n);
        int pen = (a+(c-1))/c;
        int pencil = (b+(d-1))/d;
        if (pen+pencil>n) {
            puts("-1");
        } else {
            printf("%d %d\n", pen, pencil);
        }
    }
    return 0;
}