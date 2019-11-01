#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m, vis[200001], in[200001], a, b, cnt;
vector<int> adj[200001];
vector<int> v;

void dfs(int x) {
    vis[x] = 1;
    for (auto ch : adj[x]) {
        if (!vis[ch]) {
            dfs(ch);
        }
    }
    v.push_back(x);
}
int main()
{
    IOS
    cin >> n >> m;
    while (m--) {
        cin >> a >> b;
        a--;
        b--;
        in[a]++;
        in[b]++;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 0; i < n; ++i) {

        if (!vis[i]) {
            bool ok = 1;
            dfs(i);
            while (!v.empty()) {
                a = v.back();
                v.pop_back();
                if (in[a] != 2) {
                    ok = 0;
                    v.clear();
                    break;
                }
            }
            if (ok) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;



    return 0;
}
