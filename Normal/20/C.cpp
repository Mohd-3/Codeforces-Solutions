#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n, m, a, b, from[200001];
ll c, dis[200001];
vector<pair<ll, int>> adj[200001];

ll dijkstra() {
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> q;
    dis[0] = 0;
    q.push({0, 0});
    from[0] = 0;
    while (!q.empty()) {
        pair<ll, int> p = q.top();
        q.pop();
        if (p.second == n-1) {
            return p.first;
        }
        for (auto ch : adj[p.second]) {
            if (dis[ch.second] > dis[p.second]+ch.first) {
                dis[ch.second] = dis[p.second]+ch.first;
                q.push({dis[ch.second], ch.second});
                from[ch.second] = p.second;
            }
        }
    }
    return -1;
}

void prnt(int x) {
    if (x) {
        prnt(from[x]);
    }
    cout << x+1 << " \n"[x==n-1];
}
int main() {
    IOS
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> a >> b >> c;
        a--;
        b--;
        adj[a].add({c, b});
        adj[b].add({c, a});
    }
    memset(dis, INF, sizeof dis);
    int ans = dijkstra();
    if (ans==-1) {
        cout << ans << endl;
    } else {
        prnt(n-1);
    }

    return 0;
}

