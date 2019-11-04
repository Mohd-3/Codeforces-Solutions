#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 int t, n, M = 1e9+7;
char s[6];
int main() {
    scanf("%d", &t);
    while (t--) {
        int z = 0, o = 0;
        scanf("%d%s", &n, s);
        int in = 1, out = 1;
        for (int i = 0; i < 6; ++i) {
            if (s[i] == '1') {
                in = (in * (i+1))/__gcd(in, i+1);
                o++;
            } else if (s[i] == '0') {
                out = (out * (i+1))/__gcd(out, i+1);
                z++;
            }
        }
        ll num = 0;
        for (int i = 0; i < n; ++i) {
            num *= 10;
            num += 9;
        }
        ll ans = num / in;
        ans -= num / ((in*out)/__gcd(in, out));
        if (!o && !z) {
            printf("%lld\n", (num+1)%M);
            continue;
        }
        if (!z) {
            ans++;
        }
        printf("%lld\n", ans%M);
    }
    return 0;
}
 