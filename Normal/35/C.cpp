#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m, k, vis[2001][2001], mx=-1, idx1, idx2, a, b;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool isValid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

void bfs(int i, int j) {
    queue<pair<int, int>> q;
    vis[i][j] = 0;
    q.push({i, j});
    while (!q.empty()) {
        auto p = q.front();
        q.pop();
        for (int k = 0; k < 4; ++k) {
            int ni = p.first + dx[k];
            int nj = p.second + dy[k];
            if (isValid(ni, nj) && vis[ni][nj] > vis[p.first][p.second]+1) {
                vis[ni][nj] = vis[p.first][p.second]+1;
                q.push({ni, nj});
            }
        }
    }
}
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf("%d%d%d", &n, &m, &k);
    memset(vis, INF, sizeof vis);
    while (k--) {
        scanf("%d%d", &a, &b);
        a--;
        b--;
        bfs(a, b);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (vis[i][j] > mx) {
                mx = vis[i][j];
                idx1 = i+1;
                idx2 = j+1;
            }
        }
    }
    printf("%d %d\n", idx1, idx2);
    return 0;
}
