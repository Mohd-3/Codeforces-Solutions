#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
const int INF = 0x3f3f3f3f;
const double pi = acos(-1);
using ll = long long;
using namespace std;

int arr[5][5], tmp[5];
ll mx, cur;
int main() {
    iota(tmp, tmp+5, 0);
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            scanf("%d", &arr[i][j]);
        }
    }
    do {
        cur = 0;
        int i = tmp[0], j = tmp[1];
        int i2 = tmp[2], j2 = tmp[3];
        int k = tmp[4];
        cur += 0LL + arr[i][j] + arr[j][i] + arr[i2][j2] + arr[j2][i2] + arr[j][i2] + arr[i2][j] + arr[j2][k] + arr[k][j2] + arr[i2][j2] + arr[j2][i2] + arr[j2][k] + arr[k][j2];
        mx = max(mx, cur);
    } while (next_permutation(tmp, tmp+5));
    printf("%lld\n", mx);
    return 0;
}


