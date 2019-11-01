#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int T, n, s, t;
int main() {
    IOS
    cin >> T;
    while (T--) {
        cin >> n >> s >> t;
        cout << n - min(s, t)+1 << endl;
    }

    return 0;
}
