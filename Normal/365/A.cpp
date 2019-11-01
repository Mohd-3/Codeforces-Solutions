#include <bits/stdc++.h>
#define endl "\n"
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n, k, cnt, x, arr[10];
int main() {
    scanf("%d%d", &n, &k);
    while (n--) {
        scanf("%d", &x);
        memset(arr, 0, sizeof arr);
        while (x) {
            arr[x%10]=1;
            x/=10;
        }
        int ok = 1;
        for (int i = 0; i <= k; ++i) {
            if (!arr[i]) {
                ok = 0;
                break;
            }
        }
        cnt += ok;
    }
    printf("%d\n", cnt);
}