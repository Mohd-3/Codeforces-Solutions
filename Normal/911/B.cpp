#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, a, b;

bool ok(int x) {
    if (x>a || x > b)
        return 0;
    int aa = a, bb = b;
    for (int i = 0; i < n; ++i) {
        if (x<=aa) {
            aa-=x;
        } else if (x<=bb) {
            bb-=x;
        } else {
            return 0;
        }
    }
    return 1;
}
int main() {
    IOS
    cin >> n >> a >> b;
    int lo = 0, hi = 100, mid;
    while (lo<hi) {
        mid = lo+((hi-lo+1)>>1);
        if (ok(mid)) {
            lo=mid;
        } else {
            hi=mid-1;
        }
    }
    cout << lo << endl;
    return 0;
}




