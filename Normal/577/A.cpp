#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, x, cnt;
int main() {
    IOS
    cin >> n >> x;
    for (int i = 1; 1LL*i*i <= x; ++i) {
        if (x%i == 0) {
            if (i <= n && x/i <= n) {
                cnt++;
                if (x/i != i) {
                    cnt++;
                }
           }
           
        }
    }
    cout << cnt << endl;

    return 0;
}
