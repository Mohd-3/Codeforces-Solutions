#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;
 int t, n, arr[10001];
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        ll cnt = 0;
        int i = 0, j = 1;
        while (j < n) {
            while (arr[j]-arr[i] >= 32) {
                i++;
            }
            while (j < n-1 && arr[j]-arr[i] < 32) {
                j++;
            }
            if (arr[j]-arr[i] >= 32) {
                j--;
            }
            ll tmp = j-i;
            cnt += (tmp*(tmp+1))>>1;
            i++;
            j++;
        }
        cout << cnt << endl;
    }
    return 0;
}
  