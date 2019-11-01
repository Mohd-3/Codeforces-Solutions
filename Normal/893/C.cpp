#include <bits/stdc++.h>
using namespace std;
int n, m, vis[100001], a, b, tmp;
pair<int, int> cost[100001];
vector<int> adj[100001];

void dfs(int src) {
    vis[src] = 1;
    for (auto ch : adj[src]) {
        if (!vis[ch]) {
            dfs(ch);
        }
    }
}
int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &tmp);
        cost[i] = make_pair(tmp, i);
    }
    sort(cost, cost+n);
    while (m--) {
        scanf("%d %d", &a, &b);
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        if (!vis[cost[i].second]) {
            dfs(cost[i].second);
            ans += cost[i].first;
        }
    }
    printf("%lld\n", ans);

    return 0;
}

