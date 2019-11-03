#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, p, w, d, x, y, z, p2, w2;
int main() {
    scanf("%lld%lld%lld%lld", &n, &p, &w, &d);
    if (!p) {
        printf("0 0 %lld\n", n);
        return 0;
    }
    w2 = w;
    w -= d;
    p2  = p-n;
    x = p2 / w;
    y = (p - w2 * x) / d;
    if (x < 0 || y < 0) {
        puts("-1");
        return 0;
    }
    printf("%lld %lld %lld\n", x, y, n-x-y);

    return 0;
}

