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
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
char p, arr[101][101];
unordered_set<char> se;

bool isValid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m && arr[i][j] != '.' && arr[i][j] != p;
}
int main() {
    IOS;
    cin >> n >> m >> p;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    } 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i][j] == p) {
                for (int k = 0; k < 4; ++k) {
                    int ni = i+dx[k];
                    int nj = j+dy[k];
                    if (isValid(ni, nj)) {
                        se.insert(arr[ni][nj]);
                    }
                }
            }
        }
    }
    cout << se.size() << endl;
    


    return 0;
}

