#include <bits/stdc++.h>
using namespace std;

int n, k;
int main() {
    scanf("%d %d", &n, &k);
    n*=3;
    if (n > k) {
        printf("%d\n", n-k);
    } else {
        printf("0\n");
    }
    return 0;
}

