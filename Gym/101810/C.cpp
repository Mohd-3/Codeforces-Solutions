#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;
 int t, n;
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> n;
        int res = n^(n-1);
        cout << __builtin_popcount(res) << endl;
    }
        return 0;
}
      