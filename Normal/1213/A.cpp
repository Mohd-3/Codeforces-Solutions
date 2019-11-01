#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;
 
int odd, even, d, n;
int main() {
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> d;
        if (d&1) {
            odd++;
        } else {
            even++;
        }
    }
    cout << min(odd, even) << endl;
    return 0;
}