#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;
 
int t, n, mn, arr[200001];
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        mn = 1e9;
        int cnt = 0;
        for (int i = n-1; ~i; --i) {
            if (arr[i] > mn) {
                cnt++;
            }
            mn = min(mn, arr[i]);
        }
        cout << cnt << endl;
    }
    return 0;
}