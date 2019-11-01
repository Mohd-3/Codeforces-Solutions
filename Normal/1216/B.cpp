#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;
 
int n;
pair<int, int> arr[1001];
ll ans, cnt;
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].first;
        arr[i].second = i+1;
    }
    sort(arr, arr+n, greater<pair<int, int>>());
    for (int i = 0; i < n; ++i) {
        ans += arr[i].first*cnt + 1;
        cnt++;
    }
    cout << ans << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i].second << " \n"[i==n-1];
    }
    return 0;
}
 
 