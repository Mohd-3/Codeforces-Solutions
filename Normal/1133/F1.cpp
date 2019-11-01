#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m, vis[200001], a, b, cnt[200001], mx, idx;
vector<int> adj[200001];

void bfs(int src) {
    vis[src] = 1;
    queue<int> q;
    q.push(src);
    while (!q.empty()) {
        int p = q.front();
        q.pop();
        for (auto x : adj[p]) {
            if (!vis[x]) {
                cout << p << " " << x << endl;
                vis[x] = 1;
                q.push(x);
            }
        }
    }
}
int main()
{
    IOS
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        cnt[a]++;
        cnt[b]++;
        if (cnt[a] > mx) {
            mx = cnt[a];
            idx= a;
        }
        if (cnt[b] > mx) {
            mx = cnt[b];
            idx = b;
        }
    }
    bfs(idx);

    return 0;
}
