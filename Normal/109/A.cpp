#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, f, s;
int main()
{
    IOS
    //freopen("planet.in", "r", stdin);
    cin >> n;

    while (n%7 && n > 0) {
        f++;
        n -= 4;
    }
    if (n < 0 || n%7) {
        cout << -1 << endl;
        return 0;
    }
    cout << string(f, '4') << string(n/7, '7') << endl;

    return 0;
}
