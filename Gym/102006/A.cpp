#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;
 int t, arr[12], sorted[12];
 string check() {
    for (int i = 0; i < 4; ++i) {
        if (arr[i]!=sorted[i])
            return "no";
    }
    if (sorted[4]==sorted[3])
        return "no";
    return "yes";
}
int main() {
    IOS
    freopen("hello.in", "r", stdin);
    cin >> t;
    while (t--) {
        for (int i= 0; i < 12; ++i) {
            cin >> arr[i];
            sorted[i] = arr[i];
        }
        sort(sorted, sorted+12);
        cout << check() << endl;
    }
     return 0;
}
 