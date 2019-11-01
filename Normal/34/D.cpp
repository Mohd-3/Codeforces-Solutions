#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
const int INF = 0x3f3f3f3f;

int n, r1, r2, tmp;
vector<int> adj[50005];
int vis[50005];

void dfs(int src) {
    for (auto ch : adj[src]) {
        if (vis[ch] == -1) {
            vis[ch] = src;
            dfs(ch);
        }
    }
}
int main() {
    IOS;
    cin >> n >> r1 >> r2;
    memset(vis, -1, sizeof vis);
    for (int i = 1; i <= n; ++i) {
        if (i==r1)
            ++i;
        if (i > n)
            break;
        cin >> tmp;
        adj[tmp].add(i);
        adj[i].add(tmp);
    }
    vis[r2] = 0;
    dfs(r2);
    for (int i = 1; i <= n; ++i) {
        if (i == r2)
            continue;
        cout << vis[i] << " ";
    }
    cout << endl;
    

    return 0;
}

