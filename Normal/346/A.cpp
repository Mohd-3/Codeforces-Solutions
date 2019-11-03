#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n;
ll mx, tmp;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &tmp);
        mx = max(mx, tmp);
    }
    mx -= n;
    if (!mx) {
        puts("Bob");
        return 0;
    }
    printf("%s\n", (mx&1 ? "Alice" : "Bob"));
    return 0;
}
