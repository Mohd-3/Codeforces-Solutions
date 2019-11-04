#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back
#define endl "\n"
const double PI = acos(-1);
using ll = long long;
using namespace std;
 int a, b, c, t;
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        cout << (a+b+c == 180 ? "YES" : "NO") << endl;
    }
    return 0;
}
    