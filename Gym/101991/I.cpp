#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 int t, n, k;
ll ans;
pair<ll, ll> arr[100001];
int main()
{
    IOS
    freopen("icecream.in", "r", stdin);
    cin >> t;
    while (t--) {
        vector<pair<ll, ll>> v;
        cin >> n >> k;
        ans = 0;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i].first;
        }
        for (int i = 0; i < n; ++i) {
            cin >> arr[i].second;
        }
        sort(arr, arr+n, [](const pair<ll, ll>& a, const pair<ll, ll>& b) {
             if (a.first==b.first) {
                return b.second < a.second;
             }
             return a.first < b.first;
             });
         ll mx = 0;
        for (int i = 0; i < k; ++i) {
            ans += arr[i].second;
            mx = max(mx, arr[i].first);
        }
        cout << mx << " " << ans << endl;
     }
    return 0;
}