#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

ll n;
int main() {
    IOS
    cin >> n;
    ll tmp = (n+1)>>1;
    if (tmp&1) {
        cout << 1;
    } else {
        cout << 0;
    }
    
    return 0;
}



