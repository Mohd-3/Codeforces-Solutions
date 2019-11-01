#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n, a[100001], arr[100001];
int main() {
    //freopen("jumping.in", "r", stdin);
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    arr[n-1] = a[n-1];
    for (int i = n-2; ~i; --i) {
        arr[i] = min(arr[i+1], a[i]);
    }
    for (int i = 0; i < n; ++i) {
        int lo = i, hi = n-1, mid, ans=i;
        while (lo<=hi) {
            mid = lo+((hi-lo)>>1);
            if (arr[mid]<a[i]) {
                ans = mid;
                lo = mid+1;
            } else {
                hi = mid-1;
            }
        }
        cout << ans-i-1 << " \n"[i==n-1];
    }
    return 0;
 
 
}
