#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int t;
ll a, b, x;
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> a >> b >> x;
        cout << (a * ((x+1)>>1)) - (b * (x>>1)) << endl;
    }

    return 0;
}
