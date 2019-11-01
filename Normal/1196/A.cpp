#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
ll t, arr[3];
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr+3);
        ll tmp = min(arr[1]-arr[0], arr[2]);
        //cout << "TMP: " << tmp << " " << arr[0] << " " << arr[1] << " " << arr[2] << endl;
        arr[0] += tmp;
        arr[2] -= tmp;
        if (arr[2]&1) {
            arr[2]--;
        }
 
        cout << arr[0] + arr[2]/2 << endl;
    }
 
 
}