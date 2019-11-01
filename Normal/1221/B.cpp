#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const double PI = acos(-1);
using ll = long long;
using namespace std;
 
int n;
char arr[101][101];
int dx[] = {1, 1, -1, -1, 2, -2, 2, -2};
int dy[] = {2, -2, 2, -2, 1, -1, -1, 1};
 
bool isValid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < n && arr[i][j] == 'X';
}
 
void bfs(int st1, int st2) {
    queue<pair<int, int>> q;
 
    arr[st1][st2] = 'W';
    q.push({st1, st2});
    while (!q.empty()) {
        auto p = q.front();
        q.pop();
        int i = p.first, j = p.second;
        for (int k = 0; k < 8; ++k) {
            int ni = i + dx[k];
            int nj = j + dy[k];
            if (isValid(ni, nj)) {
                if (arr[i][j] == 'W') {
                    arr[ni][nj] = 'B';
                } else {
                    arr[ni][nj] = 'W';
                }
                q.push({ni, nj});
            }
        }
    }
}
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = 'X';
        }
    }
 
 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] == 'X') {
                bfs(i, j);
            }
        }
    }
    for (int i =0 ; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}