#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, arr[1000001], k, m, b, x, y;
int main()
{
    IOS
    //freopen("in.txt", "r", stdin);
    cin >> n >> m >> k;
    b = 1;
    for (int i = 0; i < m; ++i) {
        cin >> x;
        if (x == 1) {
            cout << 1 << endl;
            return 0;
        }
        arr[x] = -1;
    }
    for (int i = 0; i < k; ++i) {
        cin >> x >> y;
        if (x == b) {
            if (arr[y] == -1) {
                b = y;
                break;
            }
            b = y;
        } else if (y == b) {
            if (arr[x] == -1) {
                b = x;
                break;
            }
            b = x;
        }
    }
    cout << b;




    return 0;
}
