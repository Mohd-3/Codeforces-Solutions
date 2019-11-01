#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;


int n, lo, lc, ro, rc, a, b;
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    scanf("%d", &n);
    while (n--) {
        scanf("%d%d", &a, &b);
        lo += (a==1);
        lc += (a==0);
        ro += (b==1);
        rc += (b==0);
    }

    printf("%d\n", min(lo, lc) + min(ro, rc));
    return 0;
}