#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int t, arr[200001], n, k;
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int odd = 0;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            odd += arr[i]&1;
        }
        if (odd < k || (odd-k)&1) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for (int i = 0; i < n; ++i) {
            if (k == 1) {
                break;
            }
            if (arr[i]&1) {
                cout << i+1 << " ";
                k--;
            }
        }
        cout << n << endl;
    }
 
 
}