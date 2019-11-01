#include <bits/stdc++.h>
using namespace std;
#define add push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n";
typedef long long ll;
const int INF = 0x3f3f3f3f;

int k, n, arr[101], tmp;

bool ok(int x) {
    int cnt = 0;
    for (int i = 0; i < 101; ++i) {
        cnt += arr[i]/x;
    }
    return cnt >= k;
}
int main() {
    IOS
    cin >> k >> n;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        arr[tmp]++;
    }
    int lo = 0, hi = 101, mid;
    while (lo<hi) {
        mid = lo+((hi-lo+1)>>1);
        if (ok(mid))
            lo=mid;
        else
            hi=mid-1;
    }
    cout << lo << endl;

    return 0;
}

