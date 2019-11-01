#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
using namespace std;

int t, n, d;
ll sm;
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        sm = 0;
        for (int i = 0; i < n; ++i) {
            scanf("%d", &d);
            sm += d;
        }
        printf("%lld\n", (sm+(n-1))/n);
    }
    return 0;
}