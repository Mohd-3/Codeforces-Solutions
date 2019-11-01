#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, h, m, l, r, x;
int arr[51];
ll ans;
int main()
{
    IOS
    //freopen("kepler.in", "r", stdin);
    cin >> n >> h >> m;
    for (int i = 0; i < n; ++i) {
        arr[i] = h;
    }
    while (m--) {
        cin >> l >> r >> x;
        l--;
        for (int i = l; i < r; ++i) {
            arr[i] = min(x, arr[i]);
        }
    }
    for (int i = 0; i < n; ++i) {
        ans += arr[i]*arr[i];
    }
    cout << ans << endl;
    return 0;
}
