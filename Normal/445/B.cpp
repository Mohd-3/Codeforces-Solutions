#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m, parent[51], a, b, cnt[51];
ll ans = 1, tmp;

int find_parent(int x) {
    if (parent[x] == x) {
        return x;
    }
    return parent[x] = find_parent(parent[x]);
}

void join(int a, int b) {
    int p1 = find_parent(a), p2 = find_parent(b);
    if (p1 != p2) {
        parent[p2] = p1;
        cnt[p1] += cnt[p2];
        cnt[p2] = 1;
    }
}
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        parent[i] = i;
        cnt[i] = 1;
    }
    for (int i = 0; i < m; ++i) {
        scanf("%d%d", &a, &b);
        join(a, b);
    }
    for (int i = 1; i <= n; ++i) {
        ans *= 1LL<<(cnt[i]-1);
    }
    printf("%lld\n", ans);
    return 0;
}
