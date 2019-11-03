#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int q, n;
int main() {
    IOS
    cin >> q;
    while (q--) {
        cin >> n;
        if (n>>2==0 || (n%2!=0 && n%3!=0)) {
            cout << -1 << endl;
        } else {
            cout << (n>>2) << endl;
        }
    }
    
    return 0;
}






