#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

pair<int, int> arr[1001];
int n;
ll cnt=1, ans;
int main()
{
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr, arr+n, [](const pair<int, int>& a, const pair<int, int>& b) {
         if (a.second==b.second) {
            return b.first < a.first;
         }
         return b.second < a.second;
         });
    for (int i = 0; i < n; ++i) {
        if (!cnt) {
            break;
        }
        cnt += arr[i].second-1;
        ans += arr[i].first;
    }
    cout << ans << endl;
    return 0;
}
