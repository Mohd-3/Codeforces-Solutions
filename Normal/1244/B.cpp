#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

int t, n, dis[1001][1001], mx;
char arr[1001];
bool vis[1001][1001], in[1001][1001];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool isValid(int i, int j) {
    return i >= 0 && i < 2 && j >= 0 && j < n && !in[i][j];
}
void dfs(int i = 0, int j = 0) {
    in[i][j] = true;
    dis[i][j] = 1;
    for (int k = 0; k < 4; ++k) {
        int ni = i + dx[k];
        int nj = j + dy[k];
        if (ni != i && arr[j]=='0') {
            continue;
        }
        if (isValid(ni, nj)) {
            dis[ni][nj] = 0;
            dfs(ni, nj);
            dis[i][j] = max(dis[i][j], dis[ni][nj]+1);
        }
    }
    in[i][j] = false;
    mx = max(mx, dis[i][j]);
}
int main() {
    scanf("%d", &t);
    while (t--) {
        mx = 0;
        scanf("%d%s", &n, arr);
        dfs(0, 0);
        dfs(1, n-1);
        printf("%d\n", mx);
    }
    return 0;
}