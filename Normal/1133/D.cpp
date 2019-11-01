#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, ans;
int a[200001], b, z;
map<pair<int, int>, int> m;
int main()
{
    IOS
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b;
        if (a[i]==0) {
            if (b==0) {
                z++;
            }
            continue;
        }
        int ne = -b, de = a[i];
        if (ne < 0) {
            ne *= -1;
            de *= -1;
        }
        if (ne==0 && de < 0) {
            de *= -1;
        }
        int d = __gcd(abs(ne), abs(de));
        ne /= d;
        de /= d;
        pair<int, int> tmp = make_pair(ne, de);
        m[tmp]++;
        ans = max(ans, m[tmp]);
    }
    cout << ans+z << endl;
    return 0;
}
