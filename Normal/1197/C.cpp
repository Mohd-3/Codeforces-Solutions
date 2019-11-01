#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n, k, arr[300001];
int main() {
    IOS
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    vector<int> v;
    for (int i = 1; i < n; ++i) {
        v.emplace_back(arr[i]-arr[i-1]);
    }
    sort(v.begin(), v.end());
    ll ans = 0;
 
    for (int i = 0; i < n-k; ++i) {
        ans += v[i];
    }
    cout << ans << endl;
}