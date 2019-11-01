#include <bits/stdc++.h>
using namespace std;
int n, cnt, tmp, k, arr[501];
int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr+i);
    }
    for (int i = 1; i < n; ++i) {
        tmp = k-arr[i-1];
        if (tmp > 0) {
            if (arr[i] < tmp) {
                cnt += tmp-arr[i];
                arr[i] = tmp;
            }
        }
    }
    printf("%d\n", cnt);
    for (int i = 0; i < n; ++i) {
        printf("%d%c", arr[i], " \n"[i==n-1]);
    }
    return 0;
}

