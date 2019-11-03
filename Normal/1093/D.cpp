#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

ll M = 998244353;
int color[300005];
vector<int> adj[300005];
int t, n, m;

bool bipartite(int src = 0) {
    memset(color, -1, sizeof color);
    queue<int> q;
    color[src] = 0;
    q.push(src);
    while (!q.empty()) {
        int p = q.front();
        q.pop();
        for (auto ch : adj[p]) {
            if (color[ch] == color[p])
                return 0;
            else if (color[ch] == -1) {
                color[ch] = color[p]^1;
                q.push(ch);
            }
        }
    }
    return 1;
}
int a, b;
int main() {
    IOS;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        for (int i = 0; i < m; ++i) {
            cin >> a >> b;
            a--;
            b--;
            adj[a].add(b);
            adj[b].add(a);
        }
        if (!bipartite()) {
            cout << 0 << endl;
        } else {
            ll tmp = n;
            if (n-1 != m) {
               tmp -= (tmp-1)-m; 
            }
            cout << (tmp%M * 2)%M << endl;
        }
    }

    

    return 0;
}

