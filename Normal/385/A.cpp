#include <bits/stdc++.h>
using namespace std;
int n, c, arr[101];
int main() {
    scanf("%d %d", &n, &c);
    int mx = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr+i);
        if (i != 0) {
            mx = max(mx, arr[i-1]-arr[i]-c);
        }
    }
    printf("%d\n", mx);
    return 0;
}
