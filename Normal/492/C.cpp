#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

ll r, avg, cst, tmp, tot, mn, n;
pair<ll, ll> arr[100001];

int main() {
    IOS
    cin >> n >> r >> avg;
    tot = n*avg;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].second >> arr[i].first;
        tot -= arr[i].second;
    }
    sort(arr, arr+n);
    for (int i = 0; i < n; ++i) {
        if (tot<=0)
            break;
        mn = min(tot, r-arr[i].second);
        cst += mn*arr[i].first;
        tot -= mn;
    }
    cout << cst << endl;

    return 0;
}

