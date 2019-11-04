#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
 using ll = long long;
const int INF = 0x3f3f3f3f;
 int t, n, m, u, l, k, mx, a, b, c;
bool vis[100001];
vector<pair<int, int>> adj[100001];
 void dfs(int src = u, int w = 0, int d = 0) {
     if (d > l) {
        return;
    }
    vis[src] = true;
    mx= max(mx, w);
    for (auto ch : adj[src]) {
        if (!vis[ch.first]) {
            dfs(ch.first, ch.second, d+1);
        }
    }
}
int main() {
    freopen("path.in", "r", stdin);
    scanf("%d", &t);
    while (t--) {
        mx = 0;
        scanf("%d%d%d%d%d", &n, &m, &u, &l, &k);
        u--;
        for (int i = 0; i < n; ++i) {
            adj[i].clear();
            vis[i] = false;
        }
        while (m--) {
            scanf("%d%d%d", &a, &b, &c);
            a--;
            b--;
            adj[a].emplace_back(b, c);
            adj[b].emplace_back(a, c);
        }
        dfs();
        printf("%d\n", mx);
    }
      return 0;
}