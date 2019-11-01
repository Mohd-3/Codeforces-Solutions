#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;
 
int t, b, p, f, c, h;
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> b >> p >> f >> h >> c;
        if (h > c) {
            int mn = min(b>>1, p);
            b -= mn*2;
            cout << mn * h + min(b>>1, f)*c << endl;
        } else {
            int mn = min(b>>1, f);
            b -= mn*2;
            cout << mn * c + min(b>>1, p)*h << endl;
        }
    }
    
    return 0;
}
 