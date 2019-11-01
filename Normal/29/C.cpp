#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, a, b;
map<int, vector<int>> adj;
map<int, bool> vis;
map<int, int> in;
set<int> se;
void dfs(int src) {
    vis[src] = true;
    for (int ch : adj[src]) {
        if (!vis[ch]) {
            dfs(ch);
        }
    }
    printf("%d ", src);
}
int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d%d", &a, &b);
        adj[a].emplace_back(b);
        adj[b].emplace_back(a);
        in[b]++;
        in[a]++;
        se.insert(a);
        se.insert(b);
    }
    for (int x : se) {
        if (in[x]==1) {
            dfs(x);
            break;
        }
    }
    return 0;
}
