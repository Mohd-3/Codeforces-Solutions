#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
typedef long long ll;
using namespace std;
 
int n, m, k;
string arr[501];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
bool vis[501][501];
 
bool isValid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m && !vis[i][j] && arr[i][j] == '.';
}
 
 
void dfs(int i, int j) {
    vis[i][j] = true;
    int cnt = 0;
    for (int k = 0; k < 4; ++k) {
        int ni = i + dx[k];
        int nj = j + dy[k];
        if (isValid(ni, nj)) {
            cnt++;
            dfs(ni, nj);
            if (arr[ni][nj] == 'X') {
                cnt--;
            }
        }
    }
    if (!cnt && k) {
        arr[i][j] = 'X';
        k--;
    }
}
int main() {
    cin >> n >> m >> k;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i][j] == '.') {
                dfs(i, j);
                break;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << endl;
    }
 
    return 0;
}