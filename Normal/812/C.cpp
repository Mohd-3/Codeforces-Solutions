#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, s;
ll arr[100001], arr2[100001];
ll sm, ans;
bool ok(int x) {
    sm = 0;
    for (int i = 0; i < n; ++i) {
        arr2[i] = arr[i] + (i+1)*(ll)x;
    }
    sort(arr2, arr2+n);
    for (int i = 0; i < x; ++i) {
        sm += arr2[i];
    }
    return sm <= s;
}
int main() {
    IOS
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int lo = 0, hi = n, mid;
    while (lo<hi) {
        mid = lo+((hi-lo+1)>>1);
        if (ok(mid)) {
            lo=mid;
            ans = sm;
        } else {
            hi=mid-1;
        }
    }
    cout << lo << " " << ans << endl;
    
    return 0;
}
