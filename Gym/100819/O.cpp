#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const double PI = acos(-1);
using ll = long long;
using namespace std;
 int n, m, arr[501][501], vis[501][501];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
string s;
bool isValid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}
 void bfs() {
    queue<pair<int, int>> q;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            vis[i][j] = 1e9;
        }
    }
    vis[0][0] = 0;
    q.push({0, 0});
    while (!q.empty()) {
        auto p = q.front();
        q.pop();
        int i = p.first, j = p.second;
        for (int k = 0; k < 4; ++k) {
            int ni = i + dx[k] * arr[i][j];
            int nj = j + dy[k] * arr[i][j];
            if (isValid(ni, nj) && vis[ni][nj] > vis[i][j]+1) {
                vis[ni][nj] = vis[i][j]+1;
                q.push({ni, nj});
            }
        }
    }
}
int main() {
    IOS
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        for (int j = 0; j < m; ++j) {
            arr[i][j] = s[j]-'0';
        }
    }
    bfs();
    if (vis[n-1][m-1] == 1000000000) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        cout << vis[n-1][m-1] << endl;
    }
    return 0;
}