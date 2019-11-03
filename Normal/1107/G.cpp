#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, a;
pair<ll, ll> arr[300001];

int main() {
    IOS
    cin >> n >> a;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].first >> arr[i].second;
    }
    ll mx = 0, cur = 0, lst = -1, mxE = 0;
    for (int i = 0; i < n; ++i) {
        cur += a;
        cur -= arr[i].second;
        if (lst==-1) {
            lst = arr[i].first;
            mxE = 0;
        } else {
            mxE = max(mxE, abs(arr[i].first-arr[i-1].first));
        }
        if (mx < cur-(mxE*mxE)) {
            mx = cur-(mxE*mxE);
        }
        if (cur-(mxE*mxE) < 0) {
            cur = 0;
            mxE = 0;
            lst = -1;
        }
    }
    cout << mx << endl;
     
    return 0;
}










