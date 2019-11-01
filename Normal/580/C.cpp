#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m, ans, cat[100001], vis[100001], a, b;
vector<int> adj[100001];

void dfs(int src=0, int cnt=0) {
    vis[src] = 1;
    if (cat[src]) {
        cnt++;
    } else {
        cnt = 0;
    }
    if (cnt>m) {
        return;
    }
    int cc = 0;
    for (auto ch : adj[src]) {
        if (!vis[ch]) {
            cc++;
            dfs(ch, cnt);
        }
    }
    if (cc==0) {
        ans++;
    }
}
int main()
{
    IOS
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> cat[i];
    }
    for (int i = 0; i < n-1; ++i) {
        cin >> a >> b;
        a--;
        b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs();
    cout << ans << endl;

    return 0;
}
