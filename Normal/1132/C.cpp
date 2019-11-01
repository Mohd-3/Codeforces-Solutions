#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
pair<int, int> arr[5001];
int n, q, ones[5001], a[5001];
int main() {
    IOS
    cin >> n >> q;
    for (int i = 0; i < q; ++i) {
        cin >> arr[i].first >> arr[i].second;
        for (int j = arr[i].first; j <= arr[i].second; ++j) {
            a[j]++;
        }
    }
    int ans = 0;
    for (int i = 0; i < q; ++i) {
        int cur = 0, o = 0;
        for (int j = arr[i].first; j <= arr[i].second; ++j) {
            a[j]--;
        }
        for (int j = 1; j <= n; ++j) {
            if (a[j] > 0) {
                cur++;
            }
            if (a[j]==1) {
                ones[j]++;
            }
            ones[j] += ones[j-1];
        }
        for (int j = i+1; j < q; ++j) {
            o = ones[arr[j].second] - ones[arr[j].first-1];
            ans = max(cur-o, ans);
        }
        memset(ones, 0, sizeof ones);
        for (int j = arr[i].first; j <= arr[i].second; ++j) {
            a[j]++;
        }
    }
    cout << ans << endl;
 
 
 
 
 
    return 0;
}