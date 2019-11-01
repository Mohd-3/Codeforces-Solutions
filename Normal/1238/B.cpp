#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;


int t, n, r, d;
int main() {
    scanf("%d", &t);
    while (t--) {
        ll cnt = 0, cur = 0;
        set<int, greater<>> se;
        scanf("%d%d", &n, &r);
        for (int i = 0; i < n; ++i) {
            scanf("%d", &d);
            se.insert(d);
        }
        for (int x : se) {
            if (x-cur > 0) {
                cnt++;
                cur += r;
            }
        }

        printf("%lld\n", cnt);
    }
    return 0;
}