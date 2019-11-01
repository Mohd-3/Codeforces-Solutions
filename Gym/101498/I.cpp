#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 int t, n, m;
int main()
{
    IOS
    //freopen("looking.in", "r", stdin);
    cin >> t;
    while (t--) {
        cin >> n >> m;
        if (n&1 || m&1) {
            cout << "hasan" << endl;
        } else {
            cout << "abdullah" << endl;
        }
    }
    return 0;
}