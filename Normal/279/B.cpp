#include <bits/stdc++.h>
using namespace std;
int n, t, arr[100002];

bool ok(int x) {
    int sm = 0;
    for (int i = x; i <= n; ++i) {
        if (arr[i]-arr[i-x] <= t) {
            sm = max(sm, arr[i]-arr[i-x]);
        }
    }
    return sm > 0; 
}
int main() {
    scanf("%d %d", &n, &t);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", arr+i);
        arr[i] += arr[i-1];
    }
    int lo = 0, hi = 1e5, mid;
    while (lo<hi) {
        mid = lo+((hi-lo+1)>>1);
        if (ok(mid)) {
            lo = mid;
        } else {
            hi = mid-1;
        }
    }
    printf("%d\n", lo);

    return 0;
}

