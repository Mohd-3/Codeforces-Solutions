#include <bits/stdc++.h>
using namespace std;

int n, m, arr1[102], arr2[102];
int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i <= n; ++i) {
        scanf("%d", arr1+i);
    }
    for (int i = 0; i <= m; ++i) {
        scanf("%d", arr2+i);
    }
    if (m > n) {
        printf("0/1\n");
        return 0;
    }
    else if (n == m) {
        int a = arr1[0], b = arr2[0];
        int gcd = __gcd(a, b);
        a/=gcd;
        b/=gcd;
        if (b < 0) {
            b *= -1;
            a *= -1;
        }
        printf("%d/%d\n", a, b);
    } else {
        if ((arr1[0] < 0 && arr2[0] < 0) || (arr1[0] > 0 && arr2[0] > 0)) {
            printf("Infinity\n");
        } else {
            printf("-Infinity\n");
        }
    }

    return 0;
}

