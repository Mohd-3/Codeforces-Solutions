#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n;
ll w, lo=0, hi, d, cur;
int main() {
    scanf("%d%lld", &n, &w);
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &d);
        cur += d;
        hi = max(hi, cur);
        lo = min(lo, cur);
    }
    if (hi > w || lo*-1 > w) {
        puts("0");
        return 0;
    }
    printf("%lld\n", max(0LL, w-hi+lo+1));
 
    return 0;
 
 
}