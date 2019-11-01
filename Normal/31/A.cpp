#include <bits/stdc++.h>
using namespace std;
int n, arr[101];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr+i);
    }
    for (int i = n-1; ~i; --i) {
        for (int j = n-1; ~j; --j) {
            for (int k = 0; k < n; ++k) {
                if (i == j || i == k || j == k)
                    continue;
                if (arr[i]-arr[j] == arr[k]) {
                    printf("%d %d %d\n", i+1, j+1, k+1);
                    return 0;
                }
            }
        }
    }
    printf("-1\n");
    return 0;
}

