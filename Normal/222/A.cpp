#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using ll = long long;
const int INF = 0x3f3f3f3f;

int n, k, arr[100001];
int main() {
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    int chk = arr[k-1];
    for (int i = k; i < n; ++i) {
        if (arr[i] != chk) {
            puts("-1");
            return 0;
        }
    }
    int i;
    for (i = k-1; ~i; --i) {
        if (arr[i] != chk) {
            break;
        }
    }
    printf("%d\n", i+1);
    return 0;
}