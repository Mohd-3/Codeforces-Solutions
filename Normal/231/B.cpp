#include <bits/stdc++.h>
using namespace std;

int n, d, l, arr[101];
int main() {
    scanf("%d %d %d", &n, &d, &l);
    for (int i = 0; i < n; d=arr[i]-d, ++i) {
        if (d > 0) {
            arr[i] = l;
        } else {
            arr[i] = 1;
        }
    }
    arr[n-1] -= d;
    if (arr[n-1] < 1 || arr[n-1] > l) {
        printf("-1\n");
    } else {
        for (int i = 0; i < n; ++i) {
            printf("%d%c", arr[i], " \n"[i==n-1]);
        }
    }
    return 0;
}

