#include <bits/stdc++.h>
#define endl "\n"
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;
 
int n, x, ans, arr[100001];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr+n);
    ans = 1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] >= ans) {
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}