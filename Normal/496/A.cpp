#include <bits/stdc++.h>
using namespace std;

int n, arr[101];
int main() {
    scanf("%d", &n);
    int mx = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr+i);
        if (i != 0) {
            mx = max(mx, abs(arr[i]-arr[i-1]));
        }
    }
    int mn = 10000;
    for (int i = 1; i < n-1; ++i) {
        mn = min(mn, abs(arr[i+1]-arr[i-1]));
    }
    printf("%d\n", max(mn, mx));
    return 0;
}

