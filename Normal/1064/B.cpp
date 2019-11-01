#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int t, n;
int main() {
    IOS
    cin >> t;
    while (t--) {
        cin >> n;
        int cnt = 0;
        for (int i = 0; i < 31; ++i) {
            if (n&(1<<i))
                cnt++;
        }
        cout << (1<<cnt) << endl;
    }
    return 0;
}

