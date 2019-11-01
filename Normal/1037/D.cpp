#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, arr[200001], a, b, place[200001];
vector<int> adj[200001];
vector<int> ans;
bool vis[200001];

void bfs(int src = 1) {
    vis[src] = true;
    queue<int> q;
    q.push(src);
    ans.emplace_back(src);
    while (!q.empty()) {
        int p = q.front();
        q.pop();
        for (int ch : adj[p]) {
            if (!vis[ch]) {
                vis[ch] = true;
                ans.emplace_back(ch);
                q.push(ch);
            }
        }
    }
}
int main() {
    scanf("%d", &n);
    for (int i = 1; i < n; ++i) {
        scanf("%d%d", &a, &b);
        adj[a].emplace_back(b);
        adj[b].emplace_back(a);
    }
    for (int i = 0; i < n; ++i) {
        scanf("%d" , arr+i);
        place[arr[i]] = i;
    }
    if (arr[0] != 1) {
        puts("No");
        return 0;
    }
    for (int i = 1; i <= n; ++i) {
        sort(adj[i].begin(), adj[i].end(), [](const int& f1, const int& f2) {
             return place[f1] < place[f2];
             });
    }
    bfs();
    for (int i = 0; i < n; ++i) {
        if (arr[i] != ans[i]) {
            puts("No");
            return 0;
        }
    }
    puts("Yes");
    return 0;
}
