#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

int n, m, vis[101], a, b;
vector<int> adj[101];

void bfs(int src) {
    vis[src] = 1;
    queue<int> q;
    q.push(src);
    while (!q.empty()) {
        int p = q.front();
        q.pop();
        for (int ch : adj[p]) {
            if (vis[ch] == vis[p]) {
                vis[ch] = 3;

            } else if (vis[ch] == 0) {
                vis[ch] = 3-vis[p];
                q.push(ch);
            }
        }
    }
}
int main() {
    IOS
    cin >> n >> m;
    while (m--) {
        cin >> a >> b;
        a--;
        b--;
        adj[a].emplace_back(b);
        adj[b].emplace_back(a);
    }
    int t1 = 0, t2 = 0;

    for (int i = 0; i < n; ++i) {
        if (!vis[i]) {
            bfs(i);
        } 
        a = 0, b = 0;
        for (int i = 0; i < n; ++i) {
            if (vis[i] == 1) {
                a++;
                vis[i] = 3;
            } else if (vis[i] == 2) {
                b++;
                vis[i] = 3;
            }
        }
        if (a > b) {
            swap(a, b);
        }
        if (t1 < t2) {
            swap(t1, t2);
        }
        t1 += a;
        t2 += b;
    }
    if (t1 != t2) {
        if (t1 < t2) {
            swap(t1, t2);
        }
        t1 -= t1-t2;
    }
    cout << n - (t1+t2) << endl;

    return 0;
}




