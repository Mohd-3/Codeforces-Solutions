#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
ll n, k;
int main() {
    IOS
    cin >> n >> k;
    cout << (!k ? 0 : min(1LL, n-k)) << " " << min((k<<1), n-k) << endl;
 
    return 0;
}