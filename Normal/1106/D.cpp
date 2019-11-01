#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
using ll = long long;
using namespace std;

vector<int> adj[100002];
int vis[100002];
int n, m, a, b;
vector<int> ans;

void bfs(int src) {
    priority_queue<int, vector<int>, greater<int>> q;
    vis[src] = 1;
    q.push(src);
    while (!q.empty()) {
        int p = q.top();
        ans.add(p);
        q.pop();
        for (auto ch : adj[p]) {
            if (!vis[ch]) {
                vis[ch] = 1;
                q.push(ch);
            }
        }
    }
}
int main() {
    IOS
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> a >> b;
        adj[a].add(b);
        adj[b].add(a);
    }
    bfs(1);
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " \n"[i==ans.size()-1];
    }
    

    return 0;
}


