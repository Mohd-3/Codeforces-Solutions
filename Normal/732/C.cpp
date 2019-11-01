#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

ll b, d, s, mx;
int main() {
    IOS
    cin >> b >> d >> s;
    ll mx = max(b, max(d, s));
    mx--;
    d = mx > d ? mx-d : 0;
    s = mx > s ? mx-s : 0;
    b = mx > b ? mx-b : 0;
    cout << d + s + b << endl;
    
    
    return 0;
}





