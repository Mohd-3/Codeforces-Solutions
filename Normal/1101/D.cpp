#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int val[200001], a, b, n, vis[200001];
vector<int> adj[200001];

void bfs(int src) {
    vis[src] = val[src] > 1 ? 1 : 0;
    queue<int> q;
    q.push(src);
    while (!q.empty()) {
        int p = q.front();
        q.pop();
        for (auto ch : adj[p]) {
            int tmp;
            if (__gcd(val[p], val[ch]) > 1) {
                tmp = vis[p]+1;
            } else {
                tmp = vis[p];
            }
            if (tmp > vis[ch]) {
                vis[ch] = tmp;
                q.push(ch);
            }
        }
    }
}
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> val[i];
    }
    for (int i = 0; i < n-1; ++i) {
        cin >> a >> b;
        adj[a-1].add(b-1);
    }
    for (int i = 0; i < n; ++i) {
        if (!vis[i]) {
            bfs(i);
        }
    }
    int mx = 0;
    for (int i = 0; i < n; ++i) {
        mx = max(mx, vis[i]);
    }
    cout << mx << endl;
    
    return 0;
}





