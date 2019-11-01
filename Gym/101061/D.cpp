#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;
 int t, arr[5];
int main() {
    IOS
    cin >> t;
    while (t--) {
        for (int i = 0; i < 5; ++i) {
            cin >> arr[i];
        }
        sort(arr, arr+5);
        cout << arr[3]*arr[4] << endl;
     }
    return 0;
}
      