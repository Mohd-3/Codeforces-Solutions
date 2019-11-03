#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

ll h, sm, arr[200001], x, ans, h2;
int n;
int main() {
    scanf("%lld%d", &h, &n);
    h2 = h;
    for (int i = 0; i < n; ++i) {
        scanf("%lld", arr+i);
        h2 -= arr[i];
        if (h2 <= 0) {
            printf("%d\n", i+1);
            return 0;
        }
        sm += arr[i];
    }
    if (h + sm >= h) {
        puts("-1");
        return 0;
    }
    ll lo = 0, hi = 1e12, mid;
    while (lo<=hi) {
        mid= lo+((hi-lo)>>1);
        if (h + sm*mid <= 0) {
            x = mid;
            hi = mid-1;
        } else {
            lo = mid+1;
        }
    }
    x-=5;
    ans = x*n;
    h += x*sm;
    //printf("X: %lld ans: %lld h: %lld\n", x, ans, h);
    for (int j = 0; j < 5; ++j) {
        for (int i = 0; i < n; ++i) {
            if (h <= 0) {
                printf("%lld\n", ans);
                return 0;
            }
            h += arr[i];
            ans++;

        }
    }





    return 0;
}
