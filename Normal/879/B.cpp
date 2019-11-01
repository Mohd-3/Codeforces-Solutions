#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, arr[501], ans[501], mx, lst;
ll k;
int main() {
    scanf("%d%lld", &n, &k);
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr+i);
        mx = max(mx, arr[i]);
    }
    if (k >= n) {
        printf("%d\n", mx);
        return 0;
    }
    lst = max(arr[0], arr[1]);
    ans[1] = lst;
    ans[lst]++;
    for (int i = 2; i < n; ++i) {
        if (arr[i] > lst) {
            lst = arr[i];
        }
        ans[lst]++;
        if (ans[lst] == k) {
            printf("%d\n", lst);
            return 0;
        }
    }
    printf("%d\n", mx);

    return 0;
}
