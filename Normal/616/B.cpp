#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m, arr[101][101], mn, mx;
int main()
{
    IOS
    //freopen("in.txt", "r", stdin);
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        mn = 1e9;
        for (int j = 0; j < m; ++j) {
            mn = min(mn, arr[i][j]);
        }
        mx = max(mx, mn);
    }
    cout << mx << endl;



    return 0;
}
