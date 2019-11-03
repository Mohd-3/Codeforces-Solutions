#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, fr;
char grid[51][51];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool isValid(int i, int j) {
    return i < n and i >= 0 and j < n and j >= 0 and grid[i][j]=='.';
}
int main()
{
    IOS
    //freopen("kepler.in", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
        for (int j = 0; j < n; ++j) {
            if (grid[i][j]=='.') {
                fr++;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int cnt = 0;
            for (int k = 0; k < 4; ++k) {
                int ni = i+dx[k];
                int nj = j+dy[k];
                if (isValid(ni, nj)) {
                    cnt++;
                }

            }
            if (cnt==4) {
                fr-=5;
                grid[i][j]='#';
                for (int k = 0; k < 4; ++k) {
                    grid[i+dx[k]][j+dy[k]]='#';
                }
            }
        }
    }
    if (fr==0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
