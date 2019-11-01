#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;
 
int n, f;
pair<ll, ll> arr[100001];
int main() {
    IOS
    cin >> n >> f;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr, arr+n, [](const pair<ll, ll>& a, const pair<ll, ll>& b) {
            ll x = min(b.first<<1, b.second), y = min(a.first<<1, a.second);
            ll x2 = min(b.first, b.second), y2 = min(a.first, a.second);
            return x-x2 < y-y2;
            });
    ll cnt = 0;
    for (int i = 0; i < f; ++i) {
        cnt += min(arr[i].first<<1, arr[i].second);
    }
    for (int i = f; i < n; ++i) {
        cnt += min(arr[i].first, arr[i].second);
    }
    cout << cnt << endl;
    return 0;
}