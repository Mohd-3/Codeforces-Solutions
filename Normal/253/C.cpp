#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const double PI = acos(-1);
using ll = long long;
using namespace std;

int n, arr[101], vis[101][100001], st1, st2, en1, en2, mx;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool isValid(int i) {
    return i >= 0 && i < n;
}
void bfs() {
    queue<pair<int, int>> q;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= mx; ++j) {
            vis[i][j] = 1e9;
        }
    }
    vis[st1][st2] = 0;
    q.push({st1, st2});
    while (!q.empty()) {
        auto p = q.front();
        q.pop();
        int i = p.first, j = p.second;
        for (int k = 0; k < 4; ++k) {
            int ni = i + dx[k];
            int nj = j + dy[k];
            if (isValid(ni)) {
                nj = min(nj, arr[ni]);
                if (vis[ni][nj] > vis[i][j]+1) {
                    vis[ni][nj] = vis[i][j]+1;
                    q.push({ni, nj});
                }
            }
        }
    }
}
int main() {
    IOS
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        arr[i]++;
        mx = max(mx, arr[i]);
    }
    cin >> st1 >> st2 >> en1 >> en2;
    st1--;
    en1--;
    bfs();
    cout << vis[en1][en2];
    return 0;
}
