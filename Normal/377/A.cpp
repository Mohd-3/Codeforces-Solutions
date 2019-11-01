#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, m, k, fre, cnt, vis[501][501];
char grid[501][501];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool isValid(int i, int j) {
    return i >= 0 and i < n and j >= 0 and j < m and grid[i][j] =='.' and !vis[i][j];
}
void dfs(int i, int j) {
    if (cnt >= fre-k) {
        return;
    }
    cnt++;
    vis[i][j] = 1;
    for (int k = 0; k < 4; ++k) {
        int ni = i+dx[k];
        int nj = j+dy[k];
        if (isValid(ni, nj)) {
            dfs(ni, nj);
        }
    }
}
int main() {
    IOS
    cin >> n >> m >> k;
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
        for (int j = 0; j < m; ++j) {
            if (grid[i][j]=='.')
                fre++;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j]=='.') {
                dfs(i, j);
                break;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (!vis[i][j] && grid[i][j]=='.') {
                grid[i][j] = 'X';
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << grid[i] << endl;
    }

    
    return 0;
}






