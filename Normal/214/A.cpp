#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int n, m, cnt, tmp, tmp2;
int main() {
    IOS;
    cin >> n >> m;
    for (ll i = 0; i <= 1000; ++i) {
        for (ll j = 0; j <= 1000; ++j) {
            tmp = i*i+j;
            tmp2 = i+j*j;
            if (tmp > 1000 || tmp2 > 1000)
                break;
            if (tmp == n && tmp2 == m)
                cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}

