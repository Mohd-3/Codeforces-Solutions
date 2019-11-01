#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, m;
ll ans;
pair<int, int> arr[21];

int main()
{
    IOS
    //freopen("planet.in", "r", stdin);


    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr, arr+m, [](const pair<int, int>& a, const pair<int, int>& b) {
         if (a.second == b.second) {
            return b.first < a.first;
         }
         return b.second < a.second;
         });
    for (int i = 0; i < m; ++i) {
        ll tmp = min(n, arr[i].first);
        ans += tmp * arr[i].second;
        n -= tmp;
        if (!n) {
            break;
        }
    }
    cout << ans << endl;

    return 0;
}
