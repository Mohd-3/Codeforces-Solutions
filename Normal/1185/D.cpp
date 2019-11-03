#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n;
pair<ll, int> arr[200001];

int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].first;
        arr[i].second = i;
    }
    if (n==2) {
        cout << 1 << endl;
        return 0;
    }
    sort(arr, arr+n);
    int lst = 1, cnt = 0, idx = 0;
    ll x = arr[1].first-arr[0].first;
    for (int i = 2; i < n; ++i) {
        if (arr[i].first-arr[lst].first==x) {
            lst = i;
        } else {
            cnt++;
            idx = arr[i].second;
        }
    }
    if (!cnt) {
        cout << 1 << endl;
        return 0;
    }
    if (cnt == 1) {
        cout << idx+1 << endl;
        return 0;
    }
    x = arr[2].first-arr[1].first;
    cnt = 0;
    idx =0 ;
    lst = 2;
    for (int i = 3; i < n; ++i) {
        if (arr[i].first-arr[lst].first==x) {
            lst = i;
        } else {
            cnt++;

        }
    }
    if (!cnt) {
        cout << arr[0].second+1 << endl;
        return 0;
    }
    cout << -1 << endl;
    return 0;
}
