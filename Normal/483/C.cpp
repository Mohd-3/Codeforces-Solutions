#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, k, ok[100001];
int main() {
    scanf("%d%d", &n, &k);
    int st = 1;
    int r = 0;
    ok[1] = 1;
    printf("1 ");
    while (k>1) {
        if (r) {
            st -= k;
        } else {
            st += k;
        }
        printf("%d ", st);
        ok[st] = 1;
        r = !r;
        k--;
    }
    for (int i = 1; i <= n; ++i) {
        if (!ok[i]) {
            printf("%d ", i);
        }
    }
    puts("");

    return 0;
}
