#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

ll l, r;
int main() {
    IOS
    cin >> l >> r;
    cout << "YES\n";
    for (ll i = l; i < r; i+=2) {
        cout << i << " " << 1+i << endl;
    }

    return 0;
}

