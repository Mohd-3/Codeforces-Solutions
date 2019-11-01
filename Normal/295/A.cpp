#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m, k, chk[100002], a, b;
ll arr[100002], arr2[100002];
pair<int, pair<int, int>> op[100001];
int main() {
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 0; i < n; ++i) {
        scanf("%lld", arr2+i);
    }
    for (int i = 0; i < m; ++i) {
        scanf("%d%d%d", &op[i].second.first, &op[i].second.second, &op[i].first);
        op[i].second.first--;
        op[i].second.second--;
    }
    for (int i = 0; i < k; ++i) {
        scanf("%d%d", &a, &b);
        a--;
        b--;
        chk[a]++;
        chk[b+1]--;
    }
    for (int i = 1; i < m; ++i) {
        chk[i] += chk[i-1];
    }
    for (int i = 0; i < m; ++i) {
        arr[op[i].second.first] += 1LL * op[i].first * chk[i];
        arr[op[i].second.second+1] -= 1LL * op[i].first * chk[i];
    }
    for (int i = 1; i < n; ++i) {
        arr[i] += arr[i-1];
    }
    for (int i = 0; i < n; ++i) {
        printf("%lld ", arr[i]+arr2[i]);
    }

    return 0;
}
