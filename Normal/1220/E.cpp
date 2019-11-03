#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;

int n, m,  a, b, st;
vector<int> adj[200001];
ll cost[200001];
ll mx, sm;
int main() {
    IOS
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> cost[i];
    }
    while (m--) {
        cin >> a >> b;
        a--;
        b--;
        adj[a].emplace_back(b);
        adj[b].emplace_back(a);
    }
    cin >> st;
    st--;
    for (int i = 0; i < n; ++i) {
        if (adj[i].size() == 1 && i != st) {
            mx = max(mx, cost[i]);
        } else {
            sm += cost[i];
        }
    }
    cout << mx + sm << endl;
    return 0;
}




