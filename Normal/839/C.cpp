#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, vis[100001], a, b;
vector<int> adj[100001];
long double ans;

void dfs(int src=1, int d=0, long double p=1.0) {
    vis[src] = 1;
    int x = adj[src].size();

    int cnt = 0;
    for (auto ch : adj[src]) {
        if (!vis[ch]) {
            cnt++;
            dfs(ch, d+1, (1.0/x)*p);
        }
    }
    if (cnt==0 || x == 0) {
        ans += p*d;
    }
}
int main()
{
    IOS
    cin >> n;
    for (int i = 0; i < n-1; ++i) {
        cin >> a >> b;
        adj[a].push_back(b);
    }
    dfs();
    cout.precision(15);
    cout << fixed << ans << endl;
    return 0;
}
