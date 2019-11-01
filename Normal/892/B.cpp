#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, mx, cnt, arr[1000001];
int main() {
    scanf("%d", &n);
    for (int i= 0; i < n; ++i) {
        scanf("%d", arr+i);
    }
    for (int i = n-1; ~i; --i) {
        if (!mx) {
            cnt++;
        } else {
            mx--;
        }
        mx = max(mx, arr[i]);
    }
    printf("%d\n", cnt);
    return 0;
}
