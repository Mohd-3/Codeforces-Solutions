#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;
 
int n;
ll a, b, old=-1, old2, cnt=1;
int main() {
    IOS
    cin >> n;
    while (n--) {
        cin >> a >> b;
        if (old == -1) {
            old = max(a, b);
            old2 = min(a, b);
            cnt += min(a, b);
        } else {
            if (a > b) {
                swap(a, b);
            }
            if (a >= old && a > old2) {
                cnt += a-old + (old2 < old ? 1 : 0);
            }
        }
        old = max(a, b);
        old2 = min(a, b);
    }
    cout << cnt << endl;
    return 0;
}