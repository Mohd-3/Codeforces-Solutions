#include <bits/stdc++.h>
using namespace std;

int n, r, arr[102], tmp;
int main() {
    scanf("%d", &n);
    for (int i =  0; i < n; ++i) {
        scanf("%d", &r);
        for (int i = 0; i < r; ++i) {
            scanf("%d", &tmp);
            arr[tmp]++;
        }
    }
    for (int i = 0; i < 102; ++i) {
        if (arr[i] == n) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
