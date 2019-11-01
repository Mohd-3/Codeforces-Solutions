#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
using namespace std;

char arr[2][200001];
int n, t;
bool vis[2][200001];

bool isValid(int i, int j) {
    return i >= 0 && i < 2 && j >= 0 && j < n && !vis[i][j];
}
void dfs(int i, int j, int from) {
    if (i == 1 && j == n-1) {
        if (from == 0 && (arr[i][j] == '1' || arr[i][j] == '2')) {
            vis[i][j] = true;
        } else if (from == 1 && (arr[i][j] != '1' && arr[i][j] !='2')) {
            vis[i][j] = true;
        }
        return;
    }
    vis[i][j] = true;
    //printf("%d %d - %c\n", i, j, arr[i][j]);
    if (arr[i][j] == '1' || arr[i][j] == '2') {
        if (from == 0) {
            if (isValid(i, j+1)) {
                dfs(i, j+1, 0);
            }
        }
    } else {
        if (from == 0) {
            if (isValid(i+1, j)) {
                dfs(i+1, j, 1);
            }
            if (isValid(i-1, j)) {
                dfs(i-1, j, 2);
            }
        } else if (from == 1 || from == 2) {
            if (isValid(i, j+1)) {
                dfs(i, j+1, 0);
            }
        }
    }
}
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 0; i < 2; ++i) {
            scanf("%s", arr[i]);
        }
        memset(vis, false, sizeof vis);
        dfs(0, 0, 0);
        if (vis[1][n-1]) {
            puts("YES");
        } else {
            puts("NO");
        }

    }
    return 0;
}