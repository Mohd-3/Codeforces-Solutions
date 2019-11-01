#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using namespace std;
 
int n, arr[401], t, val;
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> n;
        n <<= 2;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        int j = n-1, i = 0;
        val = -1;
        bool ok = true;
        while (i < j) {
            if (arr[j]!=arr[j-1] || arr[i] != arr[i+1] || (~val && arr[i]*arr[j] != val)) {
                ok = false;
                break;
            }
            val = arr[i]*arr[j];
            i+=2;
            j-=2;
        }
        cout << (ok ? "YES" : "NO") << endl;
 
    }
    return 0;
}