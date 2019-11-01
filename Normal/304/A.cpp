#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int n;
int main() {
    scanf("%d", &n);
    ll cnt = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            ll tmp = i*i + j*j;
            ll sq = sqrt(tmp);
            if (sq*sq == tmp && sq <= n) {
                cnt++;
            }
        }
    }
    printf("%lld\n", cnt);
    return 0;
}


