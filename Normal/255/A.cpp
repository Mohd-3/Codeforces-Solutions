#include <bits/stdc++.h>
using namespace std;

int n, arr[3], x;
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &x);
        arr[i%3] += x;
    }
    if (arr[1] > arr[0] && arr[1] > arr[2]) {
        puts("chest");
    } else if (arr[2] > arr[0] && arr[2] > arr[1]) {
        puts("biceps");
    } else {
        puts("back");
    }

    return 0;
}

