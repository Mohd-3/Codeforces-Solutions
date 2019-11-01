#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m, p, vis[1001][1001], cnt[10], speed[10];
queue<pair<int, int>> que[10];
char arr[1001][1001];
pair<int, int> pos[10];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool isValid(int i, int j) {
    return i >= 0 && i < n  && j >= 0 && j < m && !vis[i][j] && arr[i][j]=='.';
}

void bfs(int player) {
    int sp = speed[player];
    while (sp--) {
        int num = que[player].size();
        if (!num) {
            break;
        }
        while (num-->0) {
            auto p = que[player].front();
            que[player].pop();
            int i = p.first, j = p.second;
            for (int k = 0; k < 4; ++k) {
                int ni = i + dx[k];
                int nj = j + dy[k];
                if (isValid(ni, nj)) {
                    vis[ni][nj] = 1;
                    cnt[player]++;
                    que[player].push({ni, nj});
                }
            }
        }
    }


}
int main()
{
    IOS
    cin >> n >> m >> p;
    for (int i = 1; i <= p; ++i) {
        cin >> speed[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        for (int j = 0; j < m; ++j) {
            if (arr[i][j]>='1' && arr[i][j] <= '9') {
                int x = arr[i][j]-'0';
                que[x].push({i, j});
                cnt[x]++;
            }
        }
    }
    int ok = 1;
    while (ok) {
        ok = 0;
        for (int i = 1; i <= p; ++i) {
            bfs(i);
            if (!que[i].empty()) {
                ok = 1;
            }
        }
    }
    for (int i = 1; i <= p; ++i) {
        cout << cnt[i] << " \n"[i==p];
    }
    return 0;

}
