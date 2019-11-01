#include <bits/stdc++.h>
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int INF = 0x3f3f3f3f;
using namespace std;

int n, arr[100001];
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", arr+i);
    }
    sort(arr+1, arr+n+1);
    arr[0] = 1;
    for (int i = 1; i <= n; ++i) {
        if (i == n) {
            if (arr[i-1] == 1 && arr[i] == 1) {
                printf("2\n");
            } else {
                printf("%d\n", arr[i-1]);
            }
        } else {
            printf("%d ", arr[i-1]);
        }
    }

    return 0;
}
