#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;


int n, arr[100001], d, q;
ll cntL, cntR;
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &d);
        arr[d] = i;
    }
    scanf("%d", &q);
    while (q--) {
        scanf("%d", &d);
        cntL += arr[d];
        cntR += n - arr[d] + 1;
    }
    printf("%lld %lld\n", cntL, cntR);
    return 0;
}