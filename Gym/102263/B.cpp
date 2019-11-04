#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 ll n, k, t;
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%lld%lld", &n, &k);
        if (n-k==1) {
            if (k&1) {
                puts("Ayoub");
            } else {
                puts("Kilani");
            }
        } else {
            puts("Kilani");
        }
    }
     return 0;
}