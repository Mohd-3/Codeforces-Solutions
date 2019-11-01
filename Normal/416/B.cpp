#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int m, n;
int main()
{
    IOS
    cin >> m >> n;
    vector<vector<int>> arr(m+1, vector<int>(n+1));
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> arr[i][j];
            arr[i][j] += max(arr[i-1][j], arr[i][j-1]);
        }
        cout << arr[i][n] << " \n"[i==m];
    }


    return 0;
}
