#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;
 
int n, m, arr[51][51], b[51][51], chk[51][51];
 
void go(int i, int j) {
    b[i][j] =b[i][j+1] = b[i+1][j] = b[i+1][j+1] = 1;
}
int main() {
    IOS
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
            if (!arr[i][j]) {
                chk[i][j] = 1;
                if (i) {
                    chk[i-1][j] = 1;
                }
                if (j) {
                    chk[i][j-1] = 1;
                }
                if (i && j) {
                    chk[i-1][j-1] = 1;
                }
            }
        }
    }
    vector<pair<int, int>> v;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i][j] && !chk[i][j]) {
                if (i < n-1 && j < m-1) {
                    go(i, j);
                    v.emplace_back(i+1, j+1);
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i][j] != b[i][j]) {
                cout << -1 << endl;
                return 0;
            }
        }
    }
    cout << v.size() << endl;
    for (auto p : v) {
        cout << p.first << " " << p.second << endl;
    }
 
 
    
    return 0;
}
 