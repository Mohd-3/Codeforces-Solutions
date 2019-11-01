#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

ll n;
int main() {
    IOS
    cin >> n;
    if (n&1) {
        cout << ((n+1)>>1)*-1 << endl;
    } else {
        cout << (n>>1) << endl;
    }
    return 0;
}

