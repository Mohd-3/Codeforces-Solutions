#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, d;
ll mx, cur, mn=1e9+5;
pair<ll, ll> arr[100001];
int main()
{
    IOS
    cin >> n >> d;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr, arr+n, [](const pair<ll, ll>& a, const pair<ll, ll>& b) {
         if (a.first==b.first) {
            return b.second < a.second;
         }
         return a.first < b.first;
         });

    int i = 0, j = 0;
    for (j = 0; j < n; ++j) {
        cur += arr[j].second;
        while (abs(arr[j].first-arr[i].first)>=d) {
            cur -= arr[i++].second;
        }
        mx = max(mx, cur);
    }
    cout << mx << endl;

    return 0;
}
