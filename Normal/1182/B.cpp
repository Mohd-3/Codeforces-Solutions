#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m, vis[501][501], one, more, con, pos[501], num[501];
char arr[501][501];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool isValid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m && arr[i][j] == '*' && !vis[i][j];
}
void dfs(int i, int j) {
    vis[i][j] = 1;
    for (int k = 0; k < 4; ++k) {
        int ni = i + dx[k];
        int nj = j + dy[k];
        if (isValid(ni, nj)) {
            dfs(ni, nj);
        }
    }
}
int main()
{
    IOS
    //freopen("in.txt", "r", stdin);
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    if (n < 3 || m < 3) {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (isValid(i, j)) {
                dfs(i, j);
                con++;
            }
        }
    }
    if (con > 1 || con == 0) {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        int cnt = 0;
        for (int j = 0; j < m; ++j) {
            if (vis[i][j]) {
                cnt++;
                pos[i] = j;
            }

        }
        if (cnt==1) {
            one++;
        } else if (cnt>1) {
            more++;
        }
        num[i] = cnt;
    }
    if (more > 1 || one < 3 || more == 0) {
        cout << "NO" << endl;
        return 0;
    }
    
    int chk = 0;
    for (int i = 0; i < n; ++i) {
        if (num[i]==1) {
            chk = pos[i];
            break;
        }
    }
    for (int i = 0; i < n; ++i) {
        if (num[i]==1 && pos[i] != chk) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;



    return 0;
}
