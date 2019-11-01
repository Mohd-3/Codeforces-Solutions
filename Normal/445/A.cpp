#include <bits/stdc++.h>
using namespace std;

int n, m;
char arr[101][101];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
char ch[] = {'B', 'W'};
bool isValid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m && arr[i][j] == '.';
}
void dfs(int i, int j, int idx) {
    arr[i][j] = ch[idx];
    for (int k = 0; k < 4; ++k) {
        int ni = i+dx[k];
        int nj = j+dy[k];
        if (isValid(ni, nj)) {
            dfs(ni, nj, idx^1);
        }
    }
    
}
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i][j] == '.') {
                dfs(i, j, 0);
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        puts(arr[i]);
    }
    return 0;
}

