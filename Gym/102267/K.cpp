#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;
 int n, arr[21];
ll sm;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    for (int msk = 1; msk < (1<<n); ++msk) {
        int cur = 0;
        for (int i = 0; i < n; ++i) {
            if (msk&(1<<i)) {
                cur |= arr[i];
            }
        }
        sm += cur;
    }
    printf("%lld\n", sm);
    return 0;
}