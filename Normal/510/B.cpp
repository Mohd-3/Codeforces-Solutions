#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m, vis[51][51];
char arr[51][51];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool isValid(int i, int j) {
    return i >= 0 and i < n and j >= 0 and j < m and !vis[i][j];
}

bool dfs(int i, int j, int p1, int p2, int cnt) {
    vis[i][j] = 1;
    for (int k = 0; k < 4; ++k) {
        int ni = i + dx[k];
        int nj = j + dy[k];
        if (ni == p1 && nj == p2 && cnt >= 4) {
                return 1;
        }
        if (isValid(ni, nj) && arr[ni][nj] == arr[i][j]) {

            if (dfs(ni, nj, p1, p2, cnt+1)) {
                return true;
            }
        }
    }
    return false;
}
int main() {
    IOS
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            memset(vis, 0, sizeof vis);
            if (dfs(i, j, i, j, 1)) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;

    return 0;
}
