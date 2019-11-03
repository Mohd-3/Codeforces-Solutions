#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
const int INF = 0x3f3f3f3f;

int n, m;
char grid[1001][1001], grid2[1001][1001];
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
    IOS;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> grid2[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            grid[i][j] = '.';
        }
    }
    for (int i = 1; i < n-1; ++i) {
        for (int j = 1; j < m-1; ++j) {
            for (int k = 0; k < 8; ++k) {
                int ni = i+dx[k];
                int nj = j+dy[k];
                grid[ni][nj] = '#';
            }

        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid2[i][j] == '#' && grid[i][j] != '#') {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";

    return 0;
}

