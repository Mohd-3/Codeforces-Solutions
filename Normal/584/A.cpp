#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define add push_back
#define endl "\n"
const int INF = 0x3f3f3f3f;
using ll = long long;
using namespace std;

int n, k;
int main() {
    scanf("%d%d", &n, &k);
    if (k == 10) {
        if (n==1) {
            puts("-1");
            return 0;
        }
        for (int i = 0; i < n-1; ++i) {
            printf("1");
        }
        printf("0\n");
    } else {
        for (int i = 0; i < n; ++i) {
            printf("%d", k);
        }
        puts("");
    }
}
