#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, fr[200001], mx, idx;
int main() {
    IOS
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        fr[arr[i]]++;
        if (fr[arr[i]]>mx) {
            mx = fr[arr[i]];
            idx = arr[i];
        }
    }
    if (mx == 1) {
        cout << n-1 << endl;
        for (int i = 1; i < n; ++i) {
            cout << 2 << " " << i+1 << " " << i << endl;
        }
        return 0;
    }
    sort(arr.begin(), arr.end());
    auto tmp = equal_range(arr.begin(), arr.end(), idx);
    int i = tmp.first-arr.begin(), j = tmp.second-arr.begin();
    vector<pair<int, pair<int, int>>> ans;
    while (j < n-1) {
        ans.push_back({1, {j, j-1}});
        j++;
    }
    while (i > 0) {
        ans.push_back({1, {i-1, i}});
        --i;
    }
    cout << ans.size() << endl;
    for (auto x : ans) {
        cout << x.first << " " << x.second.first+1 << " " << x.second.second+1 << endl;
    }


    return 0;
}
