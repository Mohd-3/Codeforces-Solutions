#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, cnt;
string s;

int main()
{
    IOS
    //freopen("kepler.in", "r", stdin);
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        if (s[i]=='-') {
            cnt = max(0, cnt-1);
        } else {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
