#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, coins[] = {100, 20, 10, 5, 1}, ans;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < 5; ++i) {
        ans += n/coins[i];
        n = n%coins[i];
    }
    printf("%d\n", ans);
    return 0;
}
