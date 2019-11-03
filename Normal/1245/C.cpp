#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int n, M = 1e9+7;
ll f[100001];
char s[100001];


ll p(ll a, ll b) {
    if (!b) {
        return 1;
    }
    ll ret = p(a, b>>1)%M;
    if (b&1) {
        return (ret%M * (ret%M * a%M)%M)%M;
    }
    return (ret%M * ret%M)%M;
}
int main() {
    scanf("%s", s);
    n = strlen(s);
    f[0]=1;
    for (int i = 1; i < 100001; ++i) {
        f[i] = f[i-1] * i;
        if (f[i] >= M) {
            f[i] %= M;
        }
    }
    ll res = 1;
    ll ans = 0, cnt = 0;
    char lst = s[0];
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'm' || s[i] == 'w') {
            puts("0");
            return 0;
        }
        if (s[i]==lst) {
            if (s[i]=='u' || s[i] == 'n') {
                cnt++;
            }
        } else {
            if (cnt > 1) {
                for (int i = 1; i <= cnt/2; ++i) {
                    int x = cnt-(i*2)+i;
                    ll tmp = (f[x-1]%M * f[i]%M)%M;
                    ans += (f[x] / tmp);
                }
                ans++;
                res = (res%M * ans%M)%M;
            }
            ans = 0;
            cnt = 1;
            lst = s[i];
            
        }
    }
    if (cnt > 1) {
        for (int i = 1; i <= cnt/2; ++i) {
            int x = cnt-(i*2)+i;
            ll tmp = (f[x-1]%M * f[i]%M)%M;
            ans += f[x] / tmp;
        }
        ans++;
        res = (res%M * ans%M)%M;
        ans = 0;
        cnt = 1;
    }
    printf("%lld\n", res);
    return 0;
}

