#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
ll n, k, arr[100001];
int m;
int main() {
    scanf("%lld%d%lld", &n, &m, &k);
    for (int i = 0; i < m; ++i) {
        scanf("%lld", arr+i);
    }
    ll x = 0, k2 = k, pos = 0, ans = 0;
    for (int i = 0; i < m; ++i) {
        if (arr[i]-x <= k) {
            pos++;
        } else {
            if (pos) {
                ans++;
            }
            x += pos;
            k = ((arr[i]-x)+(k2-1))/k2 * k2;
            pos = 1;
        }
    }
    if (pos) {
        ans++;
    }
    printf("%lld\n", ans);
 
}