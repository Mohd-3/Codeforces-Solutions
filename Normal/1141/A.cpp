#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back;
using ll = long long;
const int INF = 0x3f3f3f3f;

ll n, m, ans, x;
int main() {
    IOS
    cin >> n >> m;
    if (n==m) {
        cout << 0 << endl;
        return 0;
    }
    x = m/n;
    if (m%n != 0 || ((x%2 != 0) && (x%3 != 0))) {
        cout << -1 << endl;
        return 0;
    }


    while (x%3==0) {
        ans++;
        x/=3;
    }
    while (x > 1) {
        ans++;
        x>>=1;
    }
    cout << ans << endl;




    return 0;
}