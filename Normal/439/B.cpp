#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, x, arr[100001];
ll ans;

int main()
{
    IOS
    //freopen("planet.in", "r", stdin);


    cin >> n >> x;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for (int i = 0; i < n; ++i) {
        ans += 1LL * x * arr[i];
        x = max(1, x-1);
    }
    cout << ans << endl;

    return 0;
}
