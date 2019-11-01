#include <bits/stdc++.h>
using namespace std;
int n, tmp, arr[3001];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
       scanf("%d", &tmp);
       arr[tmp]++;
    }
    for (int i = 1; i <= n; ++i) {
        if (!arr[i]) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("%d\n", n+1);
    return 0;
}

