#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n, k, arr[10001], x;
int main() {
    IOS
    cin >> n >> k;
    int n2 = n;
    while (n2--) {
        cin >> x;
        arr[x]++;
    }
    int cnt = 0, got = (n+1)>>1;
    vector<int> v;
    for (int i = 1; i <= k; ++i) {
        if (arr[i]) {
            v.emplace_back(arr[i]);
        }
    }
    sort(v.rbegin(), v.rend());
    for (int d : v) {
        cnt += min(got, d>>1)<<1;
        got -= min(got, d>>1);
 
    }
    cnt += got;
    cout << cnt << endl;
    return 0;
}