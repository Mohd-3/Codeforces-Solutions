#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, q, arr[100001], tmp, mx;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &tmp);
        arr[tmp]++;
        mx = max(mx, tmp);
    }
    for (int i = 1; i <= mx; ++i) {
        arr[i] += arr[i-1];
    }
    scanf("%d", &q);
    while (q--) {
        scanf("%d", &tmp);
        if (tmp >= mx) {
            printf("%d\n", n);
        } else {
            printf("%d\n", arr[tmp]);
        }
    }
    return 0;
}
