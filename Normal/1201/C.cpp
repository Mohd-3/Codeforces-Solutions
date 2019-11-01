#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n;
ll k, c=1, arr[200001];
int main() {
    //freopen("jumping.in", "r", stdin);
    IOS
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for (int i = (n>>1); i < n-1; ++i) {
        if (c*(arr[i+1]-arr[i]) <= k) {
            k -= c*(arr[i+1]-arr[i]);
            c++;
        } else {
            cout << arr[i] + k/c << endl;
            return 0;
        }
    }
    cout << arr[n-1] + k/c << endl;
    return 0;
 
 
}