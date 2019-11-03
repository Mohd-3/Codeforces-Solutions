#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;

int n, cost[200001], a, b;
ll vis[200001];
vector<int> adj[200001];

void bfs(int src) {
    queue<int> q;
    memset(vis, -1, sizeof vis);
    vis[src] = 0;
    q.push(src);
    while (!q.empty()) {
        int p = q.front();
        q.pop();
        for (auto ch : adj[p]) {
            if (vis[ch] == -1) {
                vis[ch] = vis[p]+1;
                q.push(ch);
            }
        }
    }
}
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", cost+i);
    }
    for (int i = 0; i < n-1; ++i) {
        scanf("%d %d", &a, &b);
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }
    if (n == 1) {
        printf("0\n");
        return 0;
    }
    if (n == 2) {
        printf("%d\n", max(cost[0], cost[1]));
        return 0;
    }
    bfs(0);
    ll mx = 0;
    int idx = -1;
    for (int i = 0; i < n; ++i) {
        if (vis[i] > mx) {
            mx = vis[i];
            idx = i;
        }
    }
    /*for (int i = 0; i < n; ++i) {
        if (vis[i] == mx && cost[i] < cost[idx]) {
            idx = i;
        }
    }*/
    bfs(idx);
    ll mx2 = 0;
    int idx2 = -1;
    for (int i = 0; i < n; ++i) {
        if (vis[i] > mx2) {
            mx2 = vis[i];
            idx2 = i;
        }
    }
    for (int i = 0; i < n; ++i) {
        if (vis[i] == mx2 && cost[i] < cost[idx2]) {
            idx2 =i;
        }
    }
    bfs(idx2);
    ll cost2 = 0;
    for (int i = 0; i < n; ++i) {
        cost2 += vis[i]*cost[i];
    }
    ll mx3 = 0;
    int idx3 = -1;
    for (int i = 0; i < n; ++i) {
        if (vis[i] > mx3) {
            mx3 = vis[i];
            idx3 = i;
        }
    }
    for (int i = 0; i < n; ++i) {
        if (vis[i] == mx3 && cost[i] < cost[idx3]) {
            idx3 = i;
        }
    }
    bfs(idx3);
    ll cost1 = 0;
    for (int i = 0; i < n; ++i) {
        cost1 += vis[i]*cost[i];
    }
    printf("%lld\n", max(cost1, cost2));


    return 0;
}

