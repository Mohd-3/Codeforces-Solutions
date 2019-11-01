#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

ll n, x=2, y=3, ans, tmp;
int main() {
    scanf("%lld", &n);
    while (n >= x) {
        tmp = x;
        x = y;
        y += tmp;
        ans++;
    }
    printf("%lld\n", ans);
    return 0;
}