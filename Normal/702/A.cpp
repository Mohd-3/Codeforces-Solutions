#include <bits/stdc++.h>
using namespace std;

int n, mx, k = 1, arr[100001];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr+i);
        if (i != 0) {
            if (arr[i] > arr[i-1]) {
                k++;
            } else {
                mx = max(mx, k);
                k = 1;
            }
        }
    }
    printf("%d\n", max(mx, k));
    return 0;
}
