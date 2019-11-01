#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int t, n, m;
string s;
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> n >> m;
        int maxRow = 0, maxCol = 0;
        vector<string> arr(n);
        vector<int> rows(n), cols(m);
        vector<int> bstR, bstC;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            int curRow = 0;
            for (int j = 0; j < m; ++j) {
                if (arr[i][j]=='*') {
                    curRow++;
                }
            }
            if (curRow >= maxRow) {
                maxRow = curRow;
                rows[i] = curRow;
            }
        }
        for (int j = 0; j < m; ++j) {
            int curCol = 0;
            for (int i = 0; i < n; ++i) {
                if (arr[i][j] == '*') {
                    curCol++;
                }
            }
            if (curCol >= maxCol) {
                maxCol = curCol;
                cols[j] = curCol;
 
            }
        }
        for (int i = 0; i < n; ++i) {
            if (rows[i]==maxRow) {
                bstR.emplace_back(i);
            }
        }
        for (int j = 0; j < m; ++j) {
            if (cols[j] == maxCol) {
                bstC.emplace_back(j);
            }
        }
        bool br = false;
        if (maxRow == m && maxCol == n) {
            cout << 0 << endl;
            continue;
        }
        for (int x : bstR) {
            for (int x2 : bstC) {
                if (arr[x][x2]=='.') {
                    cout << (n-maxCol) + (m-maxRow)-1 << endl;
                    br = true;
                    break;
                }
            }
            if (br) {
                break;
            }
        }
        if (br) {
            continue;
        }
        cout << (n-maxCol) + (m-maxRow)<< endl;
    }
    return 0;
}
