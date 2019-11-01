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
        sort(arr, arr+n);
         ll mx = arr[k-1].first;
        for (int i = 0; i < n; ++i) {
            if (arr[i].first > mx) {
                break;
            }
            v.emplace_back(arr[i]);
        }
        sort(v.begin(), v.end(), [](const pair<ll, ll>& a, const pair<ll, ll>& b) {
             return b.second < a.second;
             });
        mx = 0;
        for (int i = 0; i < k; ++i) {
            ans += v[i].second;
            mx = max(mx, v[i].first);
        }
        cout << mx << " " << ans << endl;
     }
    return 0;
}