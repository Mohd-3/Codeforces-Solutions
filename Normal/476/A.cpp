#include <bits/stdc++.h>
using namespace std;
int n, m;
int main() {
    scanf("%d %d", &n, &m);
    if (m > n) {
        printf("-1\n");
        return 0;
    }
    int s = n/2 + n%2;
    if (s%m == 0) {
        printf("%d\n", s);
        return 0;
    }
    for (int i = 0; i < n; ++i) {
        s++;
        if (s%m == 0) {
            printf("%d\n", s);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
